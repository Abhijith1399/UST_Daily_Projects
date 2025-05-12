#include<iostream>
using namespace std;
int main()
{
	int n1 = 60;
	int n2 = 70;
	int rem, quot;
	while (true)
	{
		rem = n2 % n1;
		if (rem == 0)
		{
			break;
		}
		n2 = n1;
		n1 = rem;

	}

	int z = (n1 * n2) / rem;//lcD
	cout << z << endl;
	cout << n1 << endl;//gcd

	return 0;
}