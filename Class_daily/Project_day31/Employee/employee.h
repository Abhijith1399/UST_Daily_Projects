#pragma once
#include<iostream>
#include<string>
using namespace std;
class Employee
{
	int E_id;
	string E_name;
	string E_adress;
	int E_phone;

public:
	//Employee();

	void setE_id(int);
	int getE_id();
	void setE_name(string);
	string getE_name();
	void setE_adress(string);
	string getE_adress();
	void setE_phone(int);
	int getE_phone();

};
