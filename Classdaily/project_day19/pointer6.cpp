#include<iostream>
using namespace std;


void swap1(int, int);  // call by value
void swap2(int*, int*);//call by pointer
void swap3(int&, int&);//call by ref


void swap1(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
	cout << "In swap1 \n" << a << b << endl;




}
void swap2(int* a, int* b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
	cout << "In swap2 \n" << *a << *b << endl;

}



void swap3(int& a, int& b)
{
	int t;
	t = a;
	a = b;
	b = t;
	cout << "In swap3 \n" << a << b << endl;

}



int main()
{

	int a = 10;
	int b = 20;
	cout << "In Main(before swap)\n" << a << b << endl;
	swap1(a, b);
		cout << "In Main(after swap)\n" << a << b << endl;
		swap2(*a, *b);
		cout << "In Main(after swap)\n" << a << b << endl;
		swap3(a, b);
		cout << "In Main(after swap)\n" << a << b << endl;



}