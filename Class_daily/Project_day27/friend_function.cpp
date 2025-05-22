#include<iostream>
using namespace std;

class M;//empty class //forward declaration

class T
{
private:
	int val;
public:
	T(int v)
	{
		val = v;
	}
	void disp()
	{
		cout << val << endl;
	}
	friend void func1(T& ,M&);

};

class M
{

private:
	int j;
public:
	M(int m)
	{
		j = m;
	}
	void disp()
	{
		cout << j << endl;
	}
	friend void func1(T&, M&);

};

void func1(T& t,M &m)
{
	t.disp();
	t.val = 10001;
	m.disp();
	m.j = 20002;
}

int main()
{
	T t1(10);


	/**static int* a = new int(10);
	delete a;
	*a = 10;*/
	M m1(1000);


	func1(t1,m1);

	t1.disp();
	m1.disp();
	return 0;
}