#include<iostream>
using namespace std;
#define R1 2
#define C1 2
#define R2 2
#define C2 2
#define R3 2
#define C3 2

int main()
{
	int arr1[R1][C1];
	int arr2[R2][C2];
	int sum = 0;
	int arr3[R3][C3];

	if (R1 != C2)
	{
		cout << "multiplication not possible" << endl;
	}
	for (int i = 0;i < R1;i++)
	{
		for (int j = 0;j < C1;j++)
		{
			cout << "enter the number";
			cin >> arr1[i][j];
		}
	}
	for (int i = 0;i < R2;i++)
	{
		for (int j = 0;j < C2;j++)
		{
			cout << "enter the number";
			cin >> arr2[i][j];
		}
	}
	for (int i = 0;i < R1;i++)
	{
		for (int j = 0;j < C2;j++)
		{
			for (int k = 0, sum = 0;k < C1;k++)
			{
				sum ==  sum+ arr1[i][k] * arr2[k][j];

			}
			arr3[i][j] = sum;
		}
	}
	for (int i = 0;i < R3;i++)
	{
		for (int j = 0;j < C3;j++)
		{

			cout << arr3[i][j];
		}
	}
}
