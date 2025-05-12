#include<iostream>
using namespace std;
int  leapyear(int);


int leapyear(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0) && (year % 400 == 0))
	{
		cout << "its leap year" << endl;
	}
	else
		cout << "not" << endl;
	return 1;
}



int main()
{
	int year;
	cout << "enter the year" << endl;
	cin >> year;
	leapyear(year);
	return 0;
}