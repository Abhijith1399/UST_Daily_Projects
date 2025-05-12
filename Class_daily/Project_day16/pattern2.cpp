#include<iostream>
using namespace std;
int main()
{
	int n = 5;
	int i, j, k;
	for (i = 1;i <= n;i++)
	{
		for (j = 1;j <= i;j++)
		{
			cout << " ";
		}
		for (k = 1;k <= n - i + 1;k++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	for (i = 1;i < n;i++)
	{
		for (j = 1;j <= n-i;j++)
		{
			cout << " ";
		}
		for (k = 1;k <=i+1;k++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}