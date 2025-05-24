#include<iostream>
#include<string>
#include"stack.h"
using namespace std;

int Stack:: push(string n,string st,int id)
{
	if (top == max - 1)
	{
		cout << "employee is full" << endl;
	}
	else
	{
		if (top == bottom)
		{
			top++;
			arr[top].setname (n);
			arr[top].setstream(st);
			arr[top].setempid(id);
		}
	}
	return 0;
}
int Stack::pop()
{
	if (top == bottom)
	{
		cout << " no employees" << endl;
	}
	else
	{
		if (top == max - 1)
		{
			cout << arr[top].getempid() << "\t" << arr[top].getname() << "\t" << arr[top].getstream() << endl;
			top--;

		}
	}

	return 0;
}
void Stack::display()
{
	if (top == bottom)
	{
		cout << "no employee to display" << endl;
	}
	else
	{
		for (int i = max - 1;i >= 0;i--)
		{
			cout << arr[i].getempid();
			cout << arr[i].getname();
			cout << arr[i].getstream();cout << endl;
		}
	}cout << endl;
	
}