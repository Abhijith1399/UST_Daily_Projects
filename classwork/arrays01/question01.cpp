#include<iostream>
using namespace std;
#define MAX 10


int main()
{
	int arr[MAX], sum ,value;
	int i;


	
	for (  i = 0;i<MAX; i++)
	{
		cout << "enter the elements" << endl;
		cin >> arr[i];
	}
	cout << "enter the value" << endl;
	cin >> value;


	for (int i = 0;i < MAX;i++)
	{

		for (int j = i + 1;j < MAX;j++)
		{
			//cout << "arr=[" << i << "]=" << arr[i] << endl;
			


			if (arr[i] + arr[j] == value)
			{
				cout << arr[i] << "+" << arr[j] << "==" << value << endl;
			}
		}
	}
	
	

	return 0;
}