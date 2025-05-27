#include<iostream>
using namespace std;

class A
{
private:
	int x;	
protected:
	int y;
	void promethod()
	{
		cout << "A is protected method is called" << endl;
	}
public :
	A()
	{
		cout << "A constructer is called" << endl;
		x = 20;
		y = 30;
	}
	void displayA()
	{
		cout << "hello from a" << endl;
		cout << "x="<<x;
		cout << "y="<<y;
		}


};


//derived clss

class B :public A
{
private:
	int a;
protected:
	int b;
public:
	B()
	{
		cout << "B constructer is called" << endl;
		a = 40;
		b= 50;
	}
	void displayB()
	{
		cout << "hello from a" << endl;
		cout << "A="<<a;
		cout << "b="<<b;
	}

	void protectB()
	{
		promethod();
		
	}
};

int main()
{
	A objA;
	B objB;

	objA.displayA();
	

	objB.displayA();
	objB.protectB();
	objB.displayB();
	

	return 0;
}