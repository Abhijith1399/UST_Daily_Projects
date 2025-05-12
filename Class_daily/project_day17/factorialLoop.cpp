#include<iostream>
using namespace std;
int fact(int);

int fact(int n)
{
	int prod= 1;
	while (n >= 1)
	{
		prod *= n;
		n--;
		if (n == 0)
		{
			break;
		}
	}
	cout << prod;
	
	return prod;
}

int main()
{
	int n;
	cout << "enter the number" << endl;
	cin >> n;
	fact(n);
	return 0;
}
