

//largest 3 number

#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	cin >> a;
	cin >> b;
	cin>>c;

	if ((a >=b) && (a >=c))
	{
		cout << a << "is largest" << endl;
	
	}
	 if (b >=c) 
	{
		cout << b << "is largest" << endl;
	}
	else
		cout << c << "is largest" << endl;
	
	
	return 0;
}