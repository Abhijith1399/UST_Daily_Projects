#include<iostream> 
using namespace std;
int main()
{
	int n;
	int sum = 0;
	int temp;
	cout << "enter the number" << endl;
	cin >> n;

	while (n > 0)
	{
		temp = n % 10;

		if (temp%2!=0 )
		{
			sum= sum + temp;
		}
		n = n / 10;

	}
	cout << sum;
}



