
#include<iostream>
using namespace std;

int recursionBs(int arr[],int target,int size)
{
	int start=0;int end=size-1;
	if (start > end)
		return -1;

		int mid = start + (end - start) / 2;

		if (arr[mid] == target)
		{
			return mid;
		}
		else if (arr[mid] <target)
		{
			end = mid - 1;
			return recursionBs(arr, target,mid - 1);
		}
		else 
		{
			start = mid + 1;
			return recursionBs(arr,target, mid + 1);
		}
	
}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int target = 8;
	int result = recursionBs(arr,target,size);
	if (result != -1)
	{
		cout << "element found at index=" << result << endl;
	}
	else
		cout << "element not find index" << endl;
	return 0;
}