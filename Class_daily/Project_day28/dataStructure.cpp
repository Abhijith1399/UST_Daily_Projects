
#include<iostream>
#define max 5
using namespace std;

int top = -1;
int bottom = -1;
int arr[max];
int push(int);
int pop();
void display();

int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	display();
	//pop();
//	display();
}


int push(int n)
{
	if (top == max-1)
	{
		cout << "stack is full" << endl;
		return 0;
	}
	top++;
	arr[top] = n;

	return 0;

}

int pop()
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

void display()
{
	if (top == bottom)
	{
		cout << "stack is empty" << endl;
		return;

	}

	cout << " stack element" << endl;
	for (int i = top;i >=0;i--)
	{
		cout<<arr[i];
	}
	cout << endl;
}