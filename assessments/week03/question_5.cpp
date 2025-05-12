#include<iostream>
#define MAX 100
using namespace std;
void leaders(int[], int);

void leaders(int arr1[], int n)
{
	bool flag = false;


	for (int i = n - 1;i > 0;i--)
	{
		flag = false;
		for (int j = i + 1;j <n;j++)
		{
			if (arr1[i] < arr1[j])
				flag = true;
		}
		if (flag == false)
			cout << arr1[i]<<" ";

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
	 leaders(arr1, n);

	return 0;
}