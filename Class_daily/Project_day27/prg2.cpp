#include<iostream>
using namespace std;




class Temp
{

private:
	static int val;
public:
	void disp()
	{
		cout << " val of val=" <<val <<endl;
	}
	Temp()
	{
		val++;
}

};

int Temp::val=10;

int main()
{
	Temp obj;
	obj.disp();


	Temp obj1;
	obj1.disp();

	Temp* obj = new Temp[10];
	obj->display();
	
	obj.disp();



	return 0;
}