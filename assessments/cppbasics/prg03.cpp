//even or not

#include<iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;

	if (num % 2 == 0)
	{
		cout << "its even number" << endl;
	}
	if(num%2!=0)
	{
		cout << "its odd number" << endl;
	}
	return 0;
}