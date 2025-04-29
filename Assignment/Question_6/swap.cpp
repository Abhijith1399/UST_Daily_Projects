#include<iostream>
using namespace std;
void swap(int&, int&);

int main()
{
	int a;
	int b;
	cout << "enter the number:" << endl;
	cin >> a;
	cout << "enter the number:" << endl;
	cin >> b;
	swap(a, b);
	cout << a << b;
}
void swap(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}
