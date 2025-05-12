#include<iostream>
using namespace std;
int main()
{
	int odd;
	int num;
	int sum = 0;
	cout << "enter the number" << endl;
	cin >> num;
	while (num != 0)
	{
		odd = num % 10;
		if (odd % 2 != 0)
		{
			sum += odd;
		}
		num /= 10;
	}
	cout << sum;
	return 0;
}