#include<iostream>
using namespace std;
int main()
{

	int num;
	int digit;
	cout << "enter the number" << endl;
	cin >> num;
	int nonzero = 0;
	while (num != 0)
	{
		digit = num % 10;
		if (digit != 0)
		{

			nonzero=digit;
			
		}
		num /= 10;
	}
	cout << nonzero;

}