#include<iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	int count = 0;
	for (int i = 2;i < num;i++)
	{
		
		if (num % i == 0)
		{
			count++;
			
		}
		
	}
	if (count == 0)
	{
		cout << "its prime";
	}
	else
		cout << "its not a prime";
	
	return 0;
}