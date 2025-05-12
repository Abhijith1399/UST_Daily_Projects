

#include<iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	int num2;
	cin >> num2;
	int temp;
	while (num2 != 0)
	{
		temp = num2;
		num2 = num % num2;
		num = temp;
	
	}
	cout << temp;
	
	return 0;
}