
#include<iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	int num2;
	int a = num;
	cin >> num2;
	int b = num2;
	int temp;
	int lcm = 1;
	while (num2 != 0)
	{
		temp = num2;
		num2 = num % num2;
		num = temp;

	}
	//cout << temp;
	lcm = (a * b) / temp;
	cout << lcm;
	return 0;
}