#include<iostream>
using namespace std;


void sumDigitSingle(int);


int temp; int sum = 0;
void sumDigitSingle(int n)
{
	if (n <10)
		return;
	else {
		sum = 0;
		while (n > 0)
		{
			int temp = n % 10;
			n = n / 10;
			sum = sum + temp;
		}
		cout << sum<<endl;
		sumDigitSingle(sum);
	}
cout << endl;
}



int main()
{
	int n;
	cout << "enter the num" << endl;
	cin >> n;
	 sumDigitSingle(n);

	return 0;
}