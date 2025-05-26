#include<iostream>
using namespace std;
void swap(int, int);


void swap(int num1 ,int num2)
{
	
	num1= num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	cout << num1 << num2;

}

int main()
{
	int num1;
	int num2;
	cout << "enter the first num" << endl;
	cin >> num1;
	cout << "enter the second num" << endl;
	cin >> num2;
	swap(num1, num2);
	return 0;

}