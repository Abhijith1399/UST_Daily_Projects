#include<iostream>
using namespace std;
int main()
{


	int n, i, j, k, m;
	cout << "enter the number" << endl;
	cin >> n;
	for (i = 0;i <=n;i++)
	{
		for (j = 0;j < n;j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	/*for (i = 0;i < n / 2;i++)
	{
		for (j = 0;j < n;j++)
		{
			cout << "*";
		}
		cout << endl;
	}*/
	
	return 0;
}