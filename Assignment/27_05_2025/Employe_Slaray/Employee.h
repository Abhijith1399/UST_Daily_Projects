#pragma once
#include<iostream>
#include<string>
using namespace std;

class Employee
{
protected:
	int EmpId;
	string EmpName;
public:
	Employee(){}
	Employee(int EmpId, string EmpName)
	{
		this->EmpId = EmpId;
		this->EmpName = EmpName;
	}
	void Display_Employee()
	{
		cout << "EmpId=" << EmpId << endl;
		cout << "Name=" << EmpName << endl;
	}


};