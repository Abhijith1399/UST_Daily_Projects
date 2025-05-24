#include<iostream>
#define max 5
using namespace std;

class Stack
{
private:

	
	int size;
	int *arr;
public:
	int top ;
	int bottom;
	Stack( int ar[], int n)
	{
		top=-1;
		 bottom=-1;

		size = n;
		arr = new int[size];
	
	}
	int push(int);
	int pop();
	void display();
 };

int Stack::push(int n)
{

	if (top == max - 1)
	{
		cout << "stack is full" << endl;
		return 0;
	}
	top++;
 arr[top] = n;

	return 0;
}
int Stack::pop()
{

	if (top == bottom)
	{
		cout << "stack is empty" << endl;
		return 0;
	}
	cout << arr[top] << "pop out" << endl;
	top--;
	return 0;
}
void  Stack:: display()
{
	if (top == bottom)
	{
		cout << "stack is empty" << endl;
		return;

	}

	cout << " stack element" << endl;
	for (int i = top;i >= 0;i--)
	{
		cout << arr[i];
	}
	cout << endl;
}
int main()
{
	int ar[max];
	int size = 5;

	 Stack obj(ar, size);
	 obj.push(10);
	 obj.push(10);
	 obj.push(10);
	 obj.push(10);

	 obj.push(10);
	 obj.display();
	obj. pop();
	 obj.display();
	 return 0;
   
}