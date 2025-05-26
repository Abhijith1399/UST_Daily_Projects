#include<iostream>
using namespace std;
int main()
{


	int n;
	cout << "enter the number" << endl;
	cin >> n;

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n/2 ;j++)
		{
			cout << "*";
		}
		cout << endl;
	}


	return 0;
}