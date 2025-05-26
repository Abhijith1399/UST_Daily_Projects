#include<iostream>
using namespace std;

int getvalue(int*, int);
int* allocmem(int*,int);
int sortAsc(int*, int);
void display(int*,int);
void swap( int&,int&);
 

int * allocmem(int*p, int n)
{
	p == (int*)malloc(sizeof(int) * n);
	return p;
}

int getvalue(int*p, int n)
{
	//for (int i = 0;i < n;i++, p++)
	//	cin >> *p;
	return 0;
}

void swap(int& x, int& y)
{
	int t;
	t = x;
	x = y;
	y = t;
}

int sortAsc(int*p, int n)
{
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (p[i] > p[j]);
			swap(p[i], p[j]);
		}
	}
	return 0;
}

void display(int*p, int n)
{

	int i = 0;
	while (i < n)
	{
		cout << *p++;
		i++;
	}
}

int main()
{
	int* ptr = nullptr;
	int n = 5;
	ptr = allocmem(ptr, n);
	getvalue(ptr, n);
	cout << "before sort" << endl;
	display(ptr, n);
	sortAsc(ptr, n);
	cout << "After sort" << endl;
	display(ptr, n);
	return 0;
}

