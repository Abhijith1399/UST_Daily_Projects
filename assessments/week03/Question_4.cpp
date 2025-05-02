
#include<iostream>
using namespace std;

#define MAX 100


int main()
{
	int n;
	int arr[MAX];
	int equli = 0;
	int left = 0;
	int Right=0;

	cout << "Enter the size: ";     
	cin >> n;
    cout << "Enter the array elements: ";
	for (int i = 0; i < n; ++i)
		cin >> arr[i];


	while (equli < n)
	{
		for (int i = equli - 1; i >= 0; i--)
			left += arr[i];

		for (int j = equli+ 1;j < n;++j)
			Right += arr[j];

		if (left == Right)

		{
			cout << "Equilibrium Point: " << equli;
			break;
		}
		else
		{
			equli++;
		}

	}
}