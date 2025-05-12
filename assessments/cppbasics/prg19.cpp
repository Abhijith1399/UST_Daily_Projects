#include<iostream>
using namespace std;
int main()
{
	int n;
	int a = 0;int b = 1;
	int c = 0;
	cin >> n;
	int i;
	int sum = 0;
	int counter = 0;
	//while(c<=n)
	for(i=0;i<n;i++)
	{	
		a= b;
		b = c;
	
		c = a + b;
		counter++;
		//cout << c << " ";
		//cout << n;
	//cout << counter << endl;

	}
	if (counter == n)
	{
		cout << c;
	}

	return 0;
}