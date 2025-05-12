//Write a Program to Print the Given String in Reverse Order


#include<iostream>
using namespace std;
#include<cstring>
#define max 100
int main()
{    

	int counter = 0;
	char arr[max];
	cin.getline(arr, max);
	for (int i = 0;i < strlen(arr);i++)
	{
		//cout << arr[i];
	}
	while (arr[counter] != '\0')
	{
		counter++;
	}


	for (int i = counter - 1;i >= 0;i--)
	{
		cout << arr[i];
	}
	return 0;
}
