
#include<iostream>
#include<string>
#include"Employe.h"
#include"HLink.h"
using namespace std;


void Employee::setEid(int id)
{
	Eid = id;
}
int Employee::getEid()
{
	return Eid;
}
void Employee::setname(string n)
{
	name = n;
}
string Employee::getname()
{
	return name;
}
void Employee::setsalary(float s)
{
	salary = s;
}
float Employee::getsalary()
{
	return salary;

}
void Employee::setnext(Employee* nt)
{
	next = nt;
}
Employee* Employee::getnext()
{
	return next;
}




