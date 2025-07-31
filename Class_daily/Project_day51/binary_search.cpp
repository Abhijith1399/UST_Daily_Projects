#include<iostream>
using namespace std;

int binaryserach(int n, int size,int arr[])
{
	static  int count = 0;
	int start = 0;
	int end = size - 1;

	while(start<=end)
	{
		int mid = start+(end-start) / 2;
		count++;
		if (arr[mid] == n)
		{
			cout << "itraetion" << count << endl;
			return 1;
			
		}
		else if (n<arr[mid])
		{
			end = mid - 1;
		}
		else if (n>arr[mid])
		{
			start = mid + 1;
		}
	}
	return -1;

		



}



int main()
{
	int n = 7;
	int arr[] = { 1,2,3,4,5,6,7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	
	//int result = binaryserach(n, size, arr);
	if (binaryserach(n,size,arr)==1)
	{
		cout << "target found"  << endl;
	}
	else
	{
		cout << "target not found" << endl;
	}

	return 0;
}