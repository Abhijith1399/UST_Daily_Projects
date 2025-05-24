#include<iostream>
#include<string>
#define max 5
using namespace std;

typedef struct Employee {

	int empId;
	string empname;
}EMP;


class EmpStack
{
private:
	int size;
	EMP arr[max];

public:
	int top;
	int bottom;
	EmpStack()
	{
		top = -1;
	}


	int push(int, string);
	int pop();
	void display();


};

int EmpStack::push(int n,  string s)
{
	if (top == max - 1)
	{
		cout << "stack is full" << endl;
		return 0;
	}
	top++;
	arr[top].empId=n;
	arr[top].empname=s;

}
int EmpStack::pop()

	{
		if (top == bottom)
		{
			cout << "stack is empty" << endl;
			return 0;
		}
		cout << arr[top].empId<<arr[top].empname << "pop out" << endl;
		top--;
		return 0;
	

}
void EmpStack::display()
{

	if (top == bottom)
	{
		cout << "stack is empty" << endl;
		return;

	}

	cout << " stack element" << endl;
	for (int i = top;i >= 0;i--)
	{
     cout<< arr[i].empId;
	 cout << arr[i].empname;cout << endl;
	}
	cout << endl;
}

int main()
{
	EmpStack obj;
	obj.push(101, "ejygw");
	obj.push(101, "ejygw");
	obj.push(101, "ejygw");
	
	obj.push(101, "ejygw");
	obj.push(101, "ejygw");
	obj.display();
	obj.pop();
	obj.display();
	return 0;
}

