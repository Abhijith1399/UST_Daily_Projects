#include<iostream>
#define MAX 100
using namespace std;
int Equlibrium(int[], int);

int main()
{
	int arr1[MAX];
	int n;
	cout << "enter the size" << endl;
	cin >> n;
	cout << "enter the numbers;" << endl;
	for (int i = 0;i < n;i++)
    cin >> arr1[i];
	 cout<<Equlibrium(arr1, n);
}


int Equlibrium(int arr1[], int n)
{
	int sumright, sumleft;
	for (int i = 0;i < n;i++)
	{
		sumleft = 0;
       	for (int j = i - 1;j >= 0;j--)
		{
			sumleft += arr1[j];
		}

		sumright = 0;
		for (int k = i + 1;k < n;k++)
		{
			sumright += arr1[k];
		}

		if (sumleft == sumright)
			return i;
	}
}
