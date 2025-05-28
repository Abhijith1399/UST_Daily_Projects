
#include<iostream>
#include"employee.h"
#include<string>



void Employee::setE_id(int E_id)
{
	this->E_id = E_id;
}
int Employee::getE_id()
{
	return this->E_id;
}
void Employee::setE_name(string E_name)
{
	this->E_name = E_name;
}
string Employee::getE_name()
{
	return this->E_name;
}
void  Employee::setE_adress(string E_adress)
{
	this->E_adress = E_adress;
}
string Employee::getE_adress()
{
	return this->E_adress;
}
void Employee::setE_phone(int E_phone)
{
	this->E_phone = E_phone;
}
int Employee::getE_phone()
{
	return E_phone;
}