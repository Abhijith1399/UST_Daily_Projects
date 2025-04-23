#include<iostream>
#include<cstring>
#include "stringhandling.h"
using namespace std;
void stringhandling()
{
	char ch1 = 'A';
	char fname[20];  //array of char in fixed size
	string sname;  // string  dynamically go the size of an string
	cout << "ch1 value" << ch1;
	cout << "enter the first name" << endl;
	cin >> fname;
	cout << "enter the second name" << endl;
	cin >> sname;
	cout << "\n my full name is" << fname << " " << sname << endl;



	cout << "hello\rabhhi" << endl;//courser to the start
	cout << "hello\booooo" << endl;//backspace
	cout << "elloooo  \a" << endl;//alert

	//printing array
	char name[] = "helloo";
	cout << "size of an array" << sizeof(name) << endl;
	cout << "size of an string" << strlen(name) << endl;

	for (int i = 0; i < sizeof(name); i++)
	{
		printf("\n%c= %d", name[i], name[i]);
	}
	for (int i = 0; i < strlen(name); i++)
	{
		printf("\n%c= %d", name[i], name[i]);
	}

}