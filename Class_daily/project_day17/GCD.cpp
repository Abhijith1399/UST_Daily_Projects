#include<iostream>
using namespace std;
int gcd(int, int);

int gcd(int num, int num2)
{
	int temp=0;
	for (int i = 1;i >=num;i++)
	{
		if ((num % i == 0) && (num2 % i == 0))
		{
			cout << i;
			temp=i;
		}

	}
	return temp;

}
int main()
{
	int num;
	int num2;
	cout << "enter the number1" << endl;
	cin >> num;
	cout << "enter the number1" << endl;
	cin >> num2;
	gcd(num, num2);
	return 0;
}