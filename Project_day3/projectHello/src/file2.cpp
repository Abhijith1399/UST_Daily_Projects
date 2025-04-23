#include<iostream>

using namespace std;

int concat() {

	int _id = 0;
	char first_name[100] = { '\0' }, second_name[100] = { '\0' };
	int itr1 = 101, itr2 = 0;                 //itr1, itr2 are used to store integer values
	for (int itr2 = 0;itr2 < 10;itr2++)
		cout << itr2 << endl;


	strcat(first_name, "abhijith");       //string concat
	cout << first_name << endl;
	register int i;
	for (i = 0;i < 100;i++)
		cout << i << endl;

	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;

	{
		int itr1 = 201;
		cout << itr1 << endl;
		cout << first_name << endl;
		cout << &first_name << endl;
		strcat(second_name, "jithu");
		cout << second_name << endl;

	}

	cout << itr1 << endl;

	return 0;


}