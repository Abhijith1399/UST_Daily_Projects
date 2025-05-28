
#include<iostream>
#include<string>
#include"employee.h"
using namespace std;


int main()
{
	Employee eobj;
	eobj.setE_id(10);
	eobj.setE_name("Abhij");
	eobj.setE_phone(123456);
	eobj.setE_adress("reteyeuedn");

	cout << eobj.getE_adress() << eobj.getE_id() << eobj.getE_name() << eobj.getE_phone();

	return 0;
}