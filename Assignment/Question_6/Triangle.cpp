#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "enter the 1st angle:" << endl;
	cin >> a;
	cout << "enter the 2nd angle:" << endl;
	cin >> b;
	cout << "enter the 3rd angle:" << endl;
	cin >> c;
	if (a + b + c == 180)
	{
		cout << "its triangle" << endl;
	}
	else
	{
		cout << "not a triangle" << endl;
	}
}
