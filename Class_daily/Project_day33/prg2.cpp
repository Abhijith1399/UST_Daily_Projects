#include<iostream>
using namespace std;
class B
{
public:
	virtual void disp() = 0;
	void printB()
	{
		cout << "Base" << endl;
	}
};
class D :public B
{
public:
	void disp()
	{
		cout << "sfgk";
	}
	void printD()
	{
		cout << "Derived" << endl;
	}
};

int main()
{
	D d;
	d.printD();;cout << endl;
	d.disp();;cout << endl;
	cout << endl;

	//upcasting

	B* ptr1 = &d;
	ptr1->disp();;cout << endl;
	ptr1->printB();;cout << endl;
	cout << endl;



}