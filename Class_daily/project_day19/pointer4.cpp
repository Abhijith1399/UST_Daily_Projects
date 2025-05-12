#include<iostream>
using namespace std;
int main()
{

	int a;
	a = 10;

	int* ptr = &a;  //store a value in an adress andmake the adress pointed by the pointer
	*ptr = 101;
	cout << *ptr << endl;


	 int *ptr =(int*)malloc(sizeof(int)*3);
	 int *temp = ptr;
	 cout << "adress of pointer" << (unsigned long int)ptr << endl;
	 *ptr = 202;
	 cout << *ptr;
	 ptr++;
	 cout << "adress of pointer" << (unsigned long int)ptr << endl;
	 *ptr = 203;
	 ptr++;
	 cout << "adress of pointer" << (unsigned long int)ptr << endl;
	 *ptr = 303;
	 cout << *ptr;


	return 0;



}