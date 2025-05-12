#include<iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	int digit = 0;
	int rev = 0;
	int temp = num;
	bool flag = true;
	while (temp > 0)
	{
		digit = temp % 10;
		temp /= 10;
		rev = rev * 10 + digit;
	}
	if (rev == num)
	{
		flag = false;
	}
	if (!flag)
	{
		cout << "palindrome";
	}
	else
		cout << "not a palindrome";

	return 0;
}