#include<iostream>
#define MAX 100
using namespace std;
int Unique(int [], int);

int main()
{
	int num;
	int n;
    int arr1[MAX]; 
	cout << "enter the size" << endl;
	cin >> n;
	cout << "enter the numbers;" << endl;
	for(int i=0;i<n;i++)
    cin >> arr1[i];
	
	Unique(arr1,n);
	return 0;
}
int Unique(int arr1[],int n)
{
	for (int i = 0;i < n;i+=2)
	{
		if (arr1[i] != arr1[i + 1])
		{
			cout << arr1[i];
			break;
		}
		
	}
	
	return 1;

}
