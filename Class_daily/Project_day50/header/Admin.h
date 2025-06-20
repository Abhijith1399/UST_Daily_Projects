#pragma once
#include<iostream>
#include"person.h"
#include"developer.h"
#include"manager.h"
#include<map>
#include"afxtempl.h"
#include<vector>
using namespace std;

class Admin :public Person,public Manager,public Developer,public Employee
{
protected:
	Manager Mobj;Employee Eobj;Person pobj;
	string manager_uid;
	string emp_Uid;
	string manager_pass;
	string emp_pass;
	string Admuid;
	string admpass;
	map<string, vector<Admin>>idpassstore;
	map<string, vector<Admin>>managerdetails;
	map<string, vector<Admin>>developdetails;
public:
	Admin()=default;
	Admin(
		const string& manager_uid, const string& emp_Uid,
		const string& manager_pass, const string& emp_pass,
		const string& address, const string& Id, const string& name,
		const string& task, int var_percentage, int DA,
		float salary, int pf, const string& Admuid,const string& admpass
	)
		: Person(address, Id, name)
		, Manager(task, var_percentage)
		, Employee(pf,salary)
		, manager_uid(manager_uid)
		, emp_Uid(emp_Uid)
		, manager_pass(manager_pass)
		, emp_pass(emp_pass),admpass(admpass),Admuid(Admuid)
	{}


	void setManageruid(string manager_uid) { this->manager_uid = manager_uid; }
	string getManageruid() { return manager_uid; }
	void setManagerpass(string manager_pass) { this->manager_pass = manager_pass; }
	string getManagerpass() { return manager_pass; }

	void setEmployeeuid(string emp_Uid) { this->emp_Uid = emp_Uid; }
	string getEmployeeuid() { return emp_Uid; }

	void createmanagerUid_pass(map<string, vector<Admin>>& idpassstore);
	void createAdminUid_pass(map<string, vector<Admin>>& idpassstore);
	void createEmpUid_pass(map<string, vector<Admin>>& idpassstore);
	void createManager(map<string, vector<Admin>>&managerdetails);
	void createdeveloper(map<string, vector<Admin>>&developdetails);
	//void adminLock(string);
	void updatemanager(map<string, vector<Admin>>& managerdetails);
	void updateDeveloper(map<string, vector<Admin>>& developdetails);
	void displaytemanager(map<string, vector<Admin>>& managerdetails);
	void displayDeveloper(map<string, vector<Admin>>& developdetails);


};
