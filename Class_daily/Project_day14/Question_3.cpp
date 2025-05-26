#include<iostream>
#define MAX 100
using namespace std;
void smaller(int[], int);

void smaller(int arr1[], int n)
{
	for (int i = 0;i < n;i++)
	{
		int count = 0;
		for (int j = i+1;j < n;j++)
		{
			if (arr1[i] >arr1[j])
			{
				count++;
			}
		}
		cout << count << " " 
			;
	}


}
int main()
{
	int arr1[MAX];
	int n;
	cout << "enter the size" << endl;
	cin >> n;
	cout << "enter the numbers;" << endl;
	for (int i = 0;i < n;i++)
	cin >> arr1[i];
	smaller(arr1, n);
}
