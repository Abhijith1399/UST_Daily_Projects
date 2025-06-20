#include<iostream>
#include<fstream>
#include"Admin.h"
#include <sstream>
#include <mutex>
#include <thread>
using namespace std;

void Admin:: createAdminUid_pass(map<string, vector<Admin>>& idpassstore)
{
	string demopass;
	cout << "enter Admin User_id:" << endl;
	cin >> Admuid;
	cout << "enter Admin password:" << endl;
	cin >> admpass;
	cout << "Re-enter Admin password:" << endl;
	cin >> demopass;
	if (demopass == admpass)
	{
		Admin Adoba("", "", "", "", "", "", "", "", 0, 0, 0.0f, 0, admpass, Admuid);
		idpassstore[Admuid].emplace_back(Adoba);


	}
	cout << "Admin uid and password created" << endl;


	ofstream outfile("uid_pass.txt", ios::app);
	if (outfile.is_open())
	{
		outfile << Admuid << "|" << admpass << endl;
	}
	outfile.close();
}

void Admin::createEmpUid_pass(map<string, vector<Admin>>& idpassstore)
{
	string demopass;
	cout << "enter employee User_id:" << endl;
	cin >> emp_Uid;
	cout << "enter employee password:" << endl;
	cin >> emp_pass;
	cout << "Re-enter manager password:" << endl;
	cin >> demopass;
	if (demopass == emp_pass)
	{
		Admin Adobj(manager_uid, "", manager_pass, "", "", "", "", "", 0, 0, 0.0f, 0,"","");
		idpassstore[emp_Uid].emplace_back(Adobj);

	}
	cout << "employee uid and password created" << endl;


	ofstream outfile("uid_pass.txt", ios::app);
	if (outfile.is_open())
	{
		outfile << emp_Uid << "|" << emp_pass << endl;
	}
	outfile.close();
}
void Admin::createManager(map<string, vector<Admin>>&managerdetails)
	{
	cout << "enter the name:" << endl;
	cin >> name;
	cout << "enter the id:" << endl;
	cin >> Id;
	cout << "enter the adress:" << endl;
	cin >>adress;
	Admin AdobM("", "","", "", adress, Id, name, "", 0, 0, 0.0f, 0,"","");
	managerdetails[Id].emplace_back(AdobM);
	cout << "Manager is created" << endl;
    ofstream outfile("details.txt", ios::app);
	if (outfile.is_open())
	{
		outfile << Id << "|" << name<<"|"<<adress << endl;
	}
	outfile.close();
}
	void Admin::createdeveloper(map<string, vector<Admin>>& developdetails)
	{
		cout << "enter the name:" << endl;
		cin >> name;
		cout << "enter the id:" << endl;
		cin >> Id;
		cout << "enter the adress:" << endl;
		cin >> adress;
		Admin Adobd("", "", "", "", adress, Id, name, "", 0, 0, 0.0f, 0,"","");
		developdetails[Id].emplace_back(Adobd);
		cout << "Developer is created" << endl;
		ofstream outfile("details.txt", ios::app);
		if (outfile.is_open())
		{
			outfile << Id << "|" << name << "|" << adress << endl;
		}
		outfile.close();
	}

	

/**	void Admin::adminLock(string s)
	{
		string reason;
		mutex mtx;
		if (reason == "death" || reason == "resign")
		{
			ifstream file("details.txt");
			if (!file.is_open())
			{
				std::cerr << "Error opening file 'details.txt'\n";
				return;
			}string line;
			while (getline(file, line))
			{
				istringstream iss(line);
				string id, name, address;
				if (std::getline(iss, id, '|') && std::getline(iss, name, '|') &&
					std::getline(iss, address))
				{
					
						lock_guard<mutex> lock(mtx);
						cout << id << name << adress << endl;
					
				}
			}

			file.close();
		}
	}
	*/
	
	void Admin::displaytemanager(map<string, vector<Admin>>& managerdetails)
	{
     	std::string Id;
		std::cout << "Enter manager ID: ";
		std::cin >> Id;

		std::ifstream file("details.txt");
		if (!file.is_open()) {		
		}

		std::string line;
		while (std::getline(file, line)) {
			if (line.empty()) continue;  // skip empty lines

			if (line.rfind(Id + "|", 0) == 0) {
				// Matching ID found — parse fields
				std::istringstream ss(line);
				std::vector<std::string> fields;
				std::string sline;
				while (std::getline(ss, sline, '|')) {
					fields.push_back(sline);
				}

				if (fields.size() >= 8) {
					std::cout << "ID: " << fields[0]
						<< ", Name: " << fields[1]
						<< ", Address: " << fields[2]
						<< ", Task: " << fields[3]
						<< ", Var%: " << fields[4]
						<< ", DA: " << fields[5]
						<< ", Salary: " << fields[6]
						<< ", PF: " << fields[7]
						<< "\n";
				}
				else {
					std::cout << "[Invalid format] " << line << "\n";
				}
				file.close();
				return; 
			}
		}

		cout << "Manager ID " << Id << " not found in details.txt\n";
		file.close();
		
	}
	
	
	void Admin::displayDeveloper(map<string, vector<Admin>>& developdetails)
	{
		string Id;
		cout << "Enter Developer ID: ";
		cin >> Id;

		std::ifstream file("details.txt");
		if (!file.is_open()) {
		}

		std::string line;
		while (std::getline(file, line)) {
			if (line.empty()) continue;  // skip empty lines

			if (line.rfind(Id + "|", 0) == 0) {
				// Matching ID found — parse fields
				std::istringstream ss(line);
				std::vector<std::string> fields;
				std::string sline;
				while (std::getline(ss, sline, '|')) {
					fields.push_back(sline);
				}

				if (fields.size() >= 5) {
					std::cout << "ID: " << fields[0]
						<< ", Name: " << fields[1]
						<< ", Address: " << fields[2]
						<< ", Salary: " << fields[3]
						<< ", PF: " << fields[4]
						<< "\n";
				}
				else {
					std::cout << "[Invalid format] " << line << "\n";
				}
				file.close();
				return;
			}
		}

		cout << "Developer ID " << Id << " not found in details.txt\n";
		file.close();

	}
	

	