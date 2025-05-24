#include<iostream>
using namespace std;
#define MAX 100
int main()
{   
	
	int arr[MAX];
	int size;
	cout << "enter the size" << endl;
	cin >> size;
	cout << "enter the element" << endl;
	for (int i = 0;i < size;i++)
	cin >> arr[i];
	

	for (int i = 0;i < size;i++)
	{
		for (int j = i+1 ;j < size;)
		{
			if (arr[i] == arr[j])
			{
				//shifting of the element in left side
				for (int k = j;k < size - 1;k++)
				{
					arr[k] = arr[k + 1];
					size--;
				}
			}
			else
				j++;//no dup item present in the next element

		}
		
	}

	for (int i = 0;i < size;i++)
		cout << arr[i] << endl;;
	
	return 0;
}