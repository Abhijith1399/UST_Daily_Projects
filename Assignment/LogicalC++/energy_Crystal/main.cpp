#include<iostream>
using namespace std;
int main()
{
	int var;
	int n=1;

	cout << "enter the number" << endl;
	cin >> var;

	cout << n << endl;
	while(var>n)
	{ 
		n = n * 2;
		if (n > var) {
			break;
		}
		cout << n;
	}
	return 0;
	
}