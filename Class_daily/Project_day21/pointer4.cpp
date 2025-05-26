//reverse an array
#include<iostream>
using namespace std;
int reverse(int*, int);
int display(int*, int);
void arrRev(int*, int);

int display(int *ptr, int cap)

{
	for (int i = 0;i < cap;i++)
	{
		cout << ptr[i];
	}
	return 1;
}


int reverse(int *ptr, int cap)
{
	int temp = 0;
	
	for (int i = 0;i<cap/2;i++)
	{
		temp = ptr[i];
		ptr[i] = ptr[cap - 1 - i];
		ptr[cap - 1 - i] = temp;
		//cout<< temp;
		
	}
	return 0;
}

void arrRev(int* ptr, int cap)
{
	int t;
	int* start = nullptr;
	int* end = nullptr;
	start = ptr;
	end = ptr + (cap - 1);//ba +cap-1
	while (start < end)
		start++;
	end--;
	//logic change the value

	t = *start;
	*start = *end;
	*end = t;
	start++;
	end--;

}

int main()
{
	int arr[] = { 1,2,3,4 };
	int cap = sizeof(arr) / sizeof(arr[0]);
	 reverse(arr, cap);
	cout << "after" << endl;
	display(arr, cap);
	cout << "again";
	arrRev( arr,  cap);
	return 0;

}