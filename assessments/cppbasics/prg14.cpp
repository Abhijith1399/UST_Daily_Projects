#include<iostream>
using  namespace std;
int main()
{
	int fact = 1;
	int num;
	cin >> num;
	int i;
for(i=1;i<=num;i++)
	{
		fact *=i;
		
	}
	cout << fact;
	return 0;
}