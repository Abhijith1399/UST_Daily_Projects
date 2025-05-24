//demo on array

#include<iostream>
using namespace std;
int main()
{
	int arr[3];  //declaration of array
	cout << "capacity of array" << sizeof(arr) << endl;
	cout << "address of arr[0]" << &arr[0] << endl;
	cout << "address of arr[1]" << &arr[1] << endl;
	cout << "address of arr[2]" << &arr[2] << endl;
	cout<<endl;
	printf("adress of arr[0]=%u\n", &arr[0]);
	printf("adress of arr[1]=%u\n", &arr[1]);
	printf("adress of arr[2]=%u\n", &arr[2]);


	return 0;
}