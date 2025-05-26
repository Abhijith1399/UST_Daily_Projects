#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cout << "enter the number:" << endl;
	cin >> a >> b >> c >> d >> e;
	int high = a;
	if (b >= high)
	{
		cout <<b<< "b is high";
	}
	 else if (c >= high)
	{

		cout <<c<< "c is high";
	}
	 else if	(d >= high)
	{

		cout <<e<< "d is high";
	}
	 else if (e >= high)
	{

		cout << e<<"e is high";
	}
	else
	{
		cout << "a is great";
	}
	return 0;
}