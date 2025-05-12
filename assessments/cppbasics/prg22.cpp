#include<iostream>
#define max 6
using namespace std;
int main()
{
	int arr[max];
	int i;
	
	for (i = 0;i < max;i++)
	{
		cin >> arr[i];
	}
	int large = arr[0];
	int small= arr[0];
	for (i = 0;i < max;i++)
	{
		if (arr[i] > large)
		{
			large = arr[i];
		}
		if (arr[i] <small)
		{
			small = arr[i];
		}
	}
	cout << large << "largest"<< endl;
	cout << small << "smllest" << endl;
	return 0;
}