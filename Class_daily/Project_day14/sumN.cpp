#include<iostream>
using namespace std;
int sumrec(int, int);

int sumrec(int num1, int num2)
{
	int sum = 0;
	if (num1<=num2)
	{
		return num1;
		return num1 + sumrec(num1-1);
	}
}

int main()
{
	int num1;
	int num2;
	cout << "enter the number first" << endl;
	cin >> num1;
	cout << "enter the number last" << endl;
	cin >> num2;
	 cout << sumrec(num1);
	return 0;
}