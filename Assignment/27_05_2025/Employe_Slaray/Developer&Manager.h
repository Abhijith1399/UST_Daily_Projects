#pragma once
#include"Employee.h"
#include<iostream>
#include<string>
using namespace std;

class Developer
{
private:
	string project_Id;
protected:
	int coding_hour;
public:
	//Developer(){}
	Developer(int coding_hour)
	{
		this->coding_hour = coding_hour;
	}

	void Display_Developer()
	{
		cout << "Coding hour:" << coding_hour << endl;;
	}

	
	

};
//------------------------------------------------------//
class Manager:public Employee
{
private:
	string Project_details;
protected:
	int Team_size;
public:
	Manager(int Team_size, int EmpId, string EmpName) :Employee(EmpId,EmpName)
	{
		this->Team_size = Team_size;
	}
	
};