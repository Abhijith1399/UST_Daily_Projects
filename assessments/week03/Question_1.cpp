#include<iostream>
#include<cstring>
using namespace std;
#define MAX 100
int main()
{ 
	int sum=0;
	char arr[MAX];
	cout << "enter the string=" << endl;
	gets_s(arr);

	for (int i = 0; i<strlen(arr); i++)
	{
	
		if (arr[i] == 'are')
		{
			cout << i << endl;
		}
		
	for (int j = 0; j < strlen(arr); j++)
		{
		
			if (arr[j] == 'in')
			{
				cout << j << endl;
			}
			sum = arr[i] + arr[j];

		}
	if (arr[i] != 'are')
	{
		arr[i] = -1;
	}

			
	}
	cout << sum;
	return 0;
}