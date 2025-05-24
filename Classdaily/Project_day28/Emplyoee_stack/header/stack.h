
#ifndef __STACK__
#define  __STACK__
#include<iostream>
#include<string> 
#include<stack>
#include"emp.h"
#define max 5
using namespace std;

class Stack
{
private:
	int size;
	Employee arr[max];
	int top;
	int bottom;
public:
	
	Stack()
	{
		size = 5;
		top = -1;
		bottom = -1;
	}
	int push(string,string,int);
	int pop();
	void display();
	
};
#endif 


