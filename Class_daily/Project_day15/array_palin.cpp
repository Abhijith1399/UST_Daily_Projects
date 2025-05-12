#include<iostream>
using namespace std;
#define MAX 5
int arraypalin(int[]);

int arraypalin(int arr1[])
{
	bool flag=true;
	int k=0;
	int arr2[MAX];
	int temp;
	for (int i = MAX-1;i >=0;i--)
	{	 
		arr2[k] = arr1[i];
		k++;
	}

	for (int k = 0;k<MAX;k++)
	cout << arr2[k];

	
	for (int i = 0;i < MAX;i++)
	{
		if (arr1[i] != arr2[i])
		{
			flag = false;
			break;
		}
	}
	if (flag == false)
	{
		cout << "its not palindrom";
	}
	else
		cout << "its  palindrom";
	return 1;
}



int main()
{
	int arr1[MAX];
	cout << "enter the number of array" << endl;
	for (int i = 0;i < MAX;i++)
	cin >> arr1[i];
	arraypalin(arr1);
	return 0;

}