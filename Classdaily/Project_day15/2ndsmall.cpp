#include<iostream>
using namespace std;
int main()
{
	int arr[7];
	//int arr1[7];
	cout << "enter the number" << endl;
	for (int i = 0;i < 7;i++)
	{
		cin >> arr[i];
	}
	int k = 0;
	for (int i = 0;i < 7 - 1;i++)
	{
		for (int j = 0;j < 7 - 1;j++)

			if (arr[j] > arr[j + 1])
			{
				k = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = k;
			}

	}
	for (int i = 0;i < 7;i++)
		cout << arr[i] << "," << endl;
	cout << arr[7 - 2] << endl;
	return 0;
}