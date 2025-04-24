#include<iostream>
using namespace std;

int digit(int);
bool checkPrime(bool);

int main()
{
	int num = 0;
	digit(num);
}



int digit(int num)
{
	int var1 = 0;
	cout << "enter the num:" << endl;
	cin >> num;
	while (num > 0)
	{
		{
			int rem = num % 10;
			cout << rem << endl;
			num = num / 10;
		}

	}return num;
}

bool checkPrime(int val1)
{
	bool flag = false;
	if (val1 <= 1)
		return false;
	for (int i = 2;i <= val1 / 2;i++)
	{
		if (val1 % i == 0)
		{
			flag = true;
			break;
		}
	}
	if (flag == 1)
		return false;
	else
		return true;
}