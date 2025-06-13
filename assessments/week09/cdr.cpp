#include<iostream>
#include"Cdr.h"
#include<string>
#include<fstream>
#include <sstream>

void CDR::readCDR(map<string, vector<int>>&Cdr)
{
    ifstream file("cdr.txt");
    if (!file.is_open()) {
        cerr << "File cannot be opened" << endl;
        exit(1);
    }

    string line;
    while (getline(file, line)) {
        istringstream is(line);
        int msisdn;
        string network;
        int callerNum;
        int SMSMO;
        int GPRS;
        int datadownload;
        int dataupdated;
        int recevernum;
        int receverNetwork;

        if (!(is >>network >> callerNum >> SMSMO>>GPRS>>
            datadownload>>dataupdated>>recevernum>>receverNetwork>>msisdn)) {
            cerr << line << endl;
            continue;
        }
        Cdr[this->network].emplace_back(this->msisdn);
        Cdr[this->network].emplace_back(this->SMSMO);
        Cdr[this->network].emplace_back(this->GPRS);
        Cdr[this->network].emplace_back(this->callerNum);
        Cdr[this->network].emplace_back(this->datadownload);
        Cdr[this->network].emplace_back(this->dataupdated);
        Cdr[this->network].emplace_back(this->recevernum);
        Cdr[this->network].emplace_back(this->receverNetwork);
      
    }
    file.close();



}

void CDR::BillingInfoCustomer(map<string, vector<int>>&Cdr)
{
    cout << "_________Customer Billing______" << endl;
    if (this->getnetwork() == this->network)
    {
        cout << "network operator" << network << endl;
        cout << "incoming voice call bill" << 0 << endl;
        cout << "incoming message bill" << 0 << endl;
    }
}
 void CDR::BillingInfointeroperator(map<string, vector<int>>&Cdr)
    {
        int count = 0;
        if (this->getnetwork() != this->network)
        {
            while (this->getnetwork() != this->network)
            {
                count++;
            }
            cout << "network operator" << network << endl;

            cout << "incoming voice call bill" << count + 1 << endl;
            cout << "incoming message bill" << count + 1 << endl;
        }
    }
 void CDR:: menu(map<string, vector<int>>& Cdr)
 {
     cout << "1.customer billing" << endl;
     cout << "2.interoperator" << endl;
     cout << "3. back" << endl;
     int option1;
     CDR cobj;
     while (true)
     {
         cin >> option1;
         switch (option1)
         {
         case 1:
             cobj.readCDR(Cdr);
             break;
         case 2:
             cobj.BillingInfoCustomer(Cdr);
             cout << endl;
             cout << "_________Interoperator Billing______" << endl;
             cobj.BillingInfointeroperator(Cdr);
             break;
         case 3:
             cout << "Logout...\n";

         default:
             cout << "Invalid choice" << endl;

         }
     }
 }