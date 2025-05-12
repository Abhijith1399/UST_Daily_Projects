


#include<iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	if (num > 0)
	{
		cout << "its positive" << endl;
	}
	else if(num<0)
	{
		cout << "its negative" << endl;
	}
	else 
	{
		cout << "enter proper number" << endl;
	}

	return 0;
}