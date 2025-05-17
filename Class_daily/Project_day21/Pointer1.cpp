#include<iostream>
using namespace std;
int main()
{
	int arr[3] = {1,2,3};
	int* ptr = nullptr;
	int a = 10;
	cout << a<<endl;
	cout << &a << endl;
	cout << ptr<<endl;
	ptr = &a;
	cout << ptr<<endl;
	cout << *ptr<<endl;
	*ptr = 20;
	cout << *ptr << a;
	ptr = arr;
	cout << ptr<<endl;
	cout << *ptr<<endl;
	cout << ptr++ << endl;
	cout << *ptr<<endl;
	cout<< ptr++ << endl;
	cout << *ptr;
	return 0;
}