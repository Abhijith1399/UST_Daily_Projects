#include<iostream>
using namespace std;
void printnum(int);


void printnum(int n)
{

	if (n == 0)
	{
		return;

	}
	cout << n;
	
	printnum(n - 1);
	
}
int main()
{
	int n;

	cout << "enter the number" << endl;
	cin >> n;
	printnum(n);
	return 0;
}