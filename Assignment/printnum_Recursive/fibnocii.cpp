#include<iostream>
using namespace std;

int fibnoci(int);



int a = 0;
int b = 1;
int n;
int fibnoci(int n)
{

	if (n == 0) {
		return 1;
	}
	int c = a + b;
	c = b;
	  return fibnoci(c);
}



int main()
{
	cout << "enter the num" << endl;
	cin >> n;
	fibnoci(n);
	return 0;
}