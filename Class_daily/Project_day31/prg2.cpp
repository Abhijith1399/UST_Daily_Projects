#include<iostream>
using namespace std;
class Data
{
public:
	int x;
	string y;
	void display()
	{
		cout << "X=" << x;
		cout << "Y=" << y;
	}
	void add()
	{
		x = 101;
		y = "iiiii";
		cout << x << y;
	}
};

int main()
{
	Data d, * dp;
	dp = &d;

	int Data::* ptr1 = &Data::x;
	string Data::* ptr2 = &Data::y;
	 //
	d.*ptr1 = 10;
	d.*ptr2 = "Abhij";
	d.display();

	cout << endl;
	*dp.*ptr1 = 20;
	*dp.*ptr2 = "jithu";
	dp->display();	dp->add();

	cout << endl;

}
