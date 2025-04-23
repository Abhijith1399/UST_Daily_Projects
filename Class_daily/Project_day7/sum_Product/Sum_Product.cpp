#include<iostream>

using namespace std;
int main()
{
	int num,sum,product,rem;
	sum = 0;
	product= 0;
	cout << "enter the number";
	cin >> num;
	while (num > 0);
	{
		cout << "loop";
		rem = num % 10;
		sum = sum + rem;
		num = num / 10;
		if (rem != 0)
			product = product * rem;
		

	}
	cout << "the sum is:" << sum;
	cout << "the product is" << product;
	return 0;
}