//Write a Program to Print Floyd's Triangle


#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i, j;
	int count = 1;
	for (i = 1;i <= n;i++)
	{
		for (j = 0;j < i;j++)
		{
			cout << count++;
		}
		cout << endl;
	}
	return 0;
}