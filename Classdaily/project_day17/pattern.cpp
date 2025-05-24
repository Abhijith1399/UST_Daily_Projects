#include<iostream>
using namespace std;
int main()
{
	int n = 5;
	int i, j, k, l, m;
	for (i = 1;i <n;i++)
	{
		for (j = 1;j <i+1;j++)
		{
			cout << "A";
			for (k = 1;k ;k++)
			{
				cout << "*";
			}
		}

		cout << endl;
	}
	return 0;
}