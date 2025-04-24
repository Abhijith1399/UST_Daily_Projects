#include<iostream>
using namespace std;

int digit(int);
bool checkPrime(int);

int main()
{
	int num = 0;
	return digit(num);
}



int digit(int num)
{   
	bool flag = true;
	int rem, t;
	int counter = 0;
	cout << "enter the num:" << endl;
	cin >> num;
	for(int i=1;;i++)
	{

		flag = true;
		t = i;
		while (t > 0)
		{
			rem = t % 10;
			t = t / 10;
			if (checkPrime(rem) == false) {
				flag = false;
				break;

			}
				
		}
		if (flag ==true)
			counter++;
		if (counter == num)
		{
			cout << i;
			break;
		}
	}
	return 0;
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
	if (flag==true)
		return false;
	else
		return true;
}