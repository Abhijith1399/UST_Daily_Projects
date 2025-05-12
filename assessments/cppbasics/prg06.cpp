//largest or smallest

#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	if ((ch >= 65) && (ch <= 90))
	{
		cout << "its large letter character" << endl;
	}
	else if ((ch >= 97) && (ch <= 123))
	{
		cout << "its small letter character" << endl;
	}
	else
		cout << "its not character" << endl;
	return 0;
}