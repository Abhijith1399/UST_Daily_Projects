//sum of array using pointers
#include<iostream>
using namespace std;
int sumarray(int*, int);

int sumarray(int *ptr, int n)
{
	int sum = 0;
	for (int i = 0;i < n;i++)
		sum += ptr[i];

	//for (int i = 0;i < n;i++,ptr++)
	//{
		//sum += *ptr;
	//}
	return sum;
}





int main()
{
	int arr [] = { 1,2,3,4,5 };
	int cap = sizeof(arr) / sizeof(arr[0]);
	cout << sumarray(&arr[0], cap);

	return 0;
}