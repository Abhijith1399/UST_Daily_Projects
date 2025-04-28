#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter the year" << endl;
	cin >> n;
	if (((n % 4 == 0) && (n % 100 != 0)) || ((n % 400 == 0)))
		cout << "its leap year";
	else
		cout << "not a leap year";
	return 0;
}
