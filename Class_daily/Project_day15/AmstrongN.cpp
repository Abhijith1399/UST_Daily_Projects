#include<iostream>
#include<math.h>
using namespace std;
bool Armstrong(int, int);
int  getdigit(int);

int getdigit(int num1)
{
	int count1 = 0;
	int digit1, digit2;

	while (num1 != 0)
	{
		digit1 = num1 % 10;
		num1 /= 10;
		count1++;
	}
	return count1;
}

bool Armstrong(int num1)
{
	int digit;
	int sum = 0;
	int temp = num1;
	int p = getdigit(num1);
	while (num1 > 0)
	{
		digit = num1 % 10;
		num1 /= 10;
		sum += pow(digit, p);
	}
	if (sum == temp)
		return true;
	else
		return false;

}

int main()
{
	int num1;
	int num2;
	cout << "enter the fisrt number" << endl;
	cin >> num1;
	cout << "enter the last num " << endl;
	cin >> num2;
	for (int i = num1;i <= num2;i++)
	{
		if (Armstrong(i) == true)
		{

			cout << i << endl;
		}


	}
	return 0;

}