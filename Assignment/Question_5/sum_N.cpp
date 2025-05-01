#include<iostream>
using namespace std;

int sumN(int );


int sumN(int n) 
{    
	if (n == 0)
	{
		return 0;
	}
    return n+ sumN(n-1);
	
}
int main()
{
	int n;
	cout << "enter the num";
	cin >> n;
	 cout<<sumN(n);
	return 0;
}