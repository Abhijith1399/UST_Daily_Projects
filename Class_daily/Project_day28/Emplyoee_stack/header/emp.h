#ifndef __EMPLOYEE__
#define __EMPLOYEE__
#include<iostream>
#include<string>
#include"stack.h"

using namespace std;

class Employee
{
private:
	int empid;
	string stream;
	string name;

public:
	void setempid(int);
	void setstream(string);
	void setname(string);

	int getempid();
	string getstream();
	string getname();

};


#endif
