#include<iostream>
#include<string>
#include"emp.h"
#include"stack.h"
using namespace std;



void  Employee::setempid(int id)
{
	empid = id;
}
int Employee::getempid()
{
	return empid;
}
void Employee::setstream(string st)
{
	stream = st;
}
string Employee::getstream()
{
	return stream;
}
void Employee::setname(string n)
{
	name = n;
}
string Employee::getname()
{
	return name;
}
