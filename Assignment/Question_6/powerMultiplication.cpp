#include<iostream>
using namespace std;
int multiPower(int, int);

int multiPower(int a, int pow)
{

	if (pow== 1)
	{

		return a;
	}
	else
	{
		return a * multiPower(a, pow - 1);
	}

}

int main()
{

	int a,p;
	cout << "enter the number:" << endl;
	cin >> a;
	cout << "enter the number of power:" << endl;
	cin >> p;
	cout << "Answer is: " << multiPower(a, p) << endl;
	return 0;

}