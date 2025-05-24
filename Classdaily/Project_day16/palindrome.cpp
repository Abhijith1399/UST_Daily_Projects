#include<iostream>
using namespace std;
void palindrome(int);

void palindrome(int num)
{ 
	int rev=0;
	int rem;
	int temp;
	temp = num;
	while (num != 0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num= num / 10;
	}

	if (temp==rev)
	{
		cout << "its palindrome" << endl;
	}
	else
		cout << "not palindrom" << endl;

}

int main()
{
	int num;
	cout << "enter the number" << endl;
	cin >> num;
	palindrome(num);
	return 0;
}