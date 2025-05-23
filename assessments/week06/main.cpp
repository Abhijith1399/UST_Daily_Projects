
#include<iostream>
#include"flight.h"
#include<string>
using namespace std;



int main()
{
	Flight obj("sgcs",49);

	obj.showAvailabile(0);
	cout << endl;
	obj.bookseat(0);
	return 0;
}