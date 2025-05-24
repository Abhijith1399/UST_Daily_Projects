#include<iostream>
using namespace std;
int main()
{
	int arr[3] = { 101,144,345 };  //declaration with initialisation
	cout << "arry[0]=" << arr[0] << endl;
	cout << "arry[1]=" << arr[1] << endl;
	cout << "arry[2]=" << arr[2] << endl;
	cout << "arry[3]=" << arr[3] << endl; //garbage value

	for (int i = 0;i < 3;i++)
		cout << "arr=[" << i << "]=" << arr[i] << endl;

	arr[0] = 234;
	arr[1] = arr[0] + 3;
	cout << arr[0]<<endl;
	cout << arr[1];

}