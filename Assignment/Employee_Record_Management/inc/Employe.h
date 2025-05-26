//#pragma once
#ifndef __EMPLOYEE__
#define __EMPLOYEE__
#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:
	   int Eid;
		string name;
		float salary;
		Employee* next;
public:
	Employee()
	{
	 Eid = 0;
	 name = "";
	 salary = 0.0;
	 next = nullptr;
	}
	void setnext(Employee*);
	Employee* getnext();
	void setEid(int);
	int getEid();
	void setname(string);
	string getname();
	void setsalary(float);
	float getsalary();

};
#endif // !__EMPLOYEE__

