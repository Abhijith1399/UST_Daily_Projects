#include<iostream>
using namespace std;
int main()
{

	int a[3] = { 10,20,30 };
	int* ptr = a;
	cout << *ptr++ << endl;
	cout << *++ptr << endl;
	cout << *ptr++ << endl;


	ptr = a;//resign the  BA
	int multiplication = *ptr * *ptr;
	cout << multiplication << endl;


	cout << sizeof(ptr) << " " << sizeof(void*) << endl;

	return 0;

}