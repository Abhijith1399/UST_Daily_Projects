#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "enter the num1:" << endl;
	cin >> a;
	cout << "enter the num2:" << endl;
	cin >> b;
	cout << "enter the num3:" << endl;
	cin >> c;
	if (a > b)
	{
		
		if (a > c)
		{
			cout <<" a is larger";
		}
		else
		{
			cout << "b is larger";
		}
	}
	else
	{
		if (b > c)
			{
				cout <<"b is larger";
			}
		else
		{
			cout << " c is larger";
		}
	
	}
	return 0;
}