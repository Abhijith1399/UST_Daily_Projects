#pragma once
#include"Employee.h"
#include"Developer&Manager.h"
#include<iostream>
#include<string>
using namespace std;

class Teamlead : public Developer,public Employee
{
private:
	string Project_details;
protected:
	int Team_size;

public:

	Teamlead(int Team_size,int coding_hour,int EmpId,string EmpName):Developer(coding_hour),Employee(EmpId,EmpName)
	{
		this->Team_size = Team_size;
	}

	void Display_Teamlead()
	{
		cout << "Team size:" << Team_size << endl;
	}
	void Display_All()
	{
		cout << "Tech lead info:" << endl;
		Display_Developer();
		Display_Teamlead();
		int salaryhour = 500 * coding_hour;
		cout << "salary based on coding hour:" << salaryhour << endl;
		int teamsalary = (salaryhour) * Team_size;
		cout << "salary based on coding hour+Team:" << teamsalary << endl;
	}
};