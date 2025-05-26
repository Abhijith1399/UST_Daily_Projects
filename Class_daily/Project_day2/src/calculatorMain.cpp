
#include<iostream>
#include <add.h>
#include <sub.h>
#include <multi.h>
#include <div.h>
using namespace std;

int main()
{
	int val1, val2;
	char operation;
    int result = 0;
	cout << "enter the values"<<endl;
	cin >> val1>>val2;


	cout << "enter the operator: +,-,*, /,%" << endl;
	cin >> operation;

	switch (operation)
	{
	case '+':
		cout << "Addition" << add(val1,val2)<< endl;
		break;
	case '-':
		cout << "Subtration" << sub(val1, val2) << endl;
		break;
	case '*':
		cout << "Multiplication" << multi(val1, val2) << endl;
		break;
	case '/':
		cout << "Division" << division(val1, val2) << endl;
		break;
	
	default:
		cout << "invalid operator" << endl;

	}
	return 0;

}
