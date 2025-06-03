#include<iostream>
using namespace std;
template<class T>

void mswap(T& a, T& b)
{
	T t = a;
	a = b;
	b = t;
 }

template<class T1,class T2>
T2 add(T1 a, T2 b)
{
	T sum = a + b;
	return sum;
}



int main()
{
	int a = 10, b = 20;
	float x = 30.3, y = 36.8;
	mswap(a, b);
	mswap(x, y);
	cout << "A=" << a << "B=" << b;
	cout << endl;
	cout << "X=" << x << "y=" << y;
	cout << endl;
	string d = "A";
	string c = "B";
	mswap(d, c);
	cout << "d=" << d<< "c=" << c;

	int z = 90;
	float m = 20.7;
	
	cout << "sum=" << add(z, m) << endl;


}