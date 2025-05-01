#include<iostream>
using namespace std;
void reverse(int);

void reverse(int num)
{
	int rev;
	if (num == 0)
	{
		return;
	}
	else
		rev = num % 10;
	cout << rev;
	reverse(num / 10);
		return;
}

int main()
{
	int  num;
	cout << "enter the number:" << endl;
	cin >> num;
	reverse(num);
	return 0;
}