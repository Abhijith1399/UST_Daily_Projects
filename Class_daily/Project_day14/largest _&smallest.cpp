#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout << "enter the num" << endl;
	for (int i = 0;i < 5;i++)
	{
		cin >> arr[i];
	}
	for (int i = 0;i < 5;i++)
	{
		if (arr[i] > arr[i + 1])
		{
			cout << arr[i] << endl;;
			cout << "the large arry element" << arr[i] << endl;
			break;
		}

	}

	for (int i = 0;i < 5;i++)
	{
		if (arr[i] < arr[i + 1])
		{
			cout << "the smallest" << arr[i] << endl;
			break;
		}

	}

	return 0;
}