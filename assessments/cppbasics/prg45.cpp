#include<iostream>
using namespace std;
int main()
{

		int num1;
	cout << "enter the num" << endl;
	cin >> num1;
	
	if ((num1 % 3 == 0) && (num1 % 5 == 0))
	{
		cout << "it is divisible;" << endl;
	}
	else
		cout << "not divisible;" << endl;
}