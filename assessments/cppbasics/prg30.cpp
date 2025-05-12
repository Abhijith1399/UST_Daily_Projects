#include<iostream>
using namespace std;
int main()
{

	int i, j, k,l;
	int n;
	cin >> n;

	for (i = 0;i < n;i++)
	{
		for (j = 0;j < i;j++)
			cout << "*";
		for (k = 1;k < n - i;k++)
			cout << "  ";
		for (l = 0;l < i;l++)
			cout << "*";
		cout << endl;
	}
	for (i = 1;i < n-1;i++)
	{
		for (j = 1;j <n- i;j++)
			cout << "*";
		for (k = 0;k <i;k++)
			cout << "  ";
		for (l = 1;l <n- i;l++)
			cout << "*";
		cout << endl;
	}
}