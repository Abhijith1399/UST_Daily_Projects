//find the maximun of two number using pointers

#include<iostream>
using namespace std;
int max(int*, int*);
void display(int);


int max(int*a, int*b)
{
	//int ret = 0;
/*	if (*a > *b)
	{
		ret = *a;	}
	else
		ret = *b;

	*/
	//ret = (*a > *b) ? (*a) : (*b);
	return((*a > *b) ? (*a) : (*b));

}
void display(int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << "==";
		
	}
	cout << endl;

}

int main()
{
	int n = 20;
	//int* ptr = nullptr;
	int a;
	cin >> a;
	int b;
	cin >> b;
	cout<<display(n);
	cout<<max(&a, &b);
	

	
}