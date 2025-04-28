#include<iostream>
using namespace std;
void add(int, int);
int main()
{
	int a;
	int b;
	cout << "enter the num1" << endl;
	cin >> a;
	cout << "enter the num2" << endl;
	cin >> b;
	add(a,b);
}
void add(int a, int b)
{
	int sum = a + b;
	if (sum % 2 == 0)
		cout << "its even";
	else
		cout << "odd";
	
}