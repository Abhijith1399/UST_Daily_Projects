#include <fstream>
#include<iostream>
#include"Cdr.h"

void CDR::serachMSISDN(map<string, vector<int>>& Cdr)
{
    ofstream ofs("CB.txt", ios::app); 
    if (!ofs) {
        cerr << "Error opening file\n";


        for (const auto& i : Cdr)
        {
            cout << i.first << ": ";
            for (int msisdn : i.second)
            {
                cout << msisdn << " ";
              
            }
            cout << endl;
        }
    }
   
    ofs.close();


}
void CDR::processData(map<string, vector<int>>& Cdr)
{

    ofstream ofs("CB.txt", ios::app);
    if (!ofs) {
        cerr << "Error opening file\n";


        for (const auto& i : Cdr)
        {
            cout << i.first << network;
            for (int data : i.second)
            {
                cout << data << " ";
            }
            cout << endl;
        }
    }

    ofs.close();
}
