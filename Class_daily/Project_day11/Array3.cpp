#include<iostream>
using namespace std;
#define CAP 10

int main()
{
	int arr1[10];
	int val;
	for (int i = 0;i < 10;i++)
	{
		cout << "enter the array of element" << endl;
		cin>>arr1[i];
	}
	for (int i = 0;i < 10;i++)
	{
		cout << "arr=[" << i << "]=" << arr1[i] << endl;
	}

	cout << "enter the number search" << endl;
	cin >> val;
	for (int i = 0;i < 10;i++)
	{
		

		if (val == arr1[i])
		{
			cout << "element is found" << endl;
			cout << "the index position=[" << i << "]" << endl;		
		}
		cout << "element is found" << endl;
	}

		
	
