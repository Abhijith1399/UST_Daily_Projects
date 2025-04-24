#include<iostream>
#include"factorial.h"
#include"fibnocii.h"
using namespace std;
int main()
{
	int var;
	cout << "press" << endl;
	cin >> var;
	cout << "choose the function" << endl;
	cout << " 1.fibnocii function" << endl;
    cout << "2.factorial function" << endl;

	if (var == 1)
	{
		cout << fibnocii();

	}
	if (var== 2)
		cout << factorial();
	
}

