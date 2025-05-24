#include<iostream>
#define ROW 3
#define COL 3
using namespace std;
int main()
{
	int count;
	int arr1[ROW][COL] = { {10,20,30},{40,50,60},{70,80,90} };
	int arr2[ROW][COL] = { 1,2,3,4,5,6,7,8,9 };

	for (int i = 0,count=0;i < ROW;i++)
	{
	
		for (int j = 0;j < COL;j++)
		{
			cout << "adress of arr[" << i << "][" << j << "]:" << (unsigned long int) & arr1[i][j] << "value:" << arr1[i][j] << endl;
			cout << endl;
		}
	}
	cout << "===========================================";




}