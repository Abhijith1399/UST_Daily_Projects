#include<iostream>
using namespace std;

class myArray
{
	int* data;
	//int size;
public:
	myArray(int val)
	{
		data = new int(val);
		//size = val;
	}


	myArray(const myArray& fobj)
	{
		cout << "copy cstr got called" << endl;
		data = new int(*fobj.data);
	}

	void setval(int val) { *data = val; }

	void display()
	{
		cout << "\t" <<*data<< endl;
		cout << "addr of data" << data << endl;
		//for(int i=0;i<size)
	}
};
int main()
{
	myArray a1(10);
	a1.display();
	myArray a2 = a1;
	a2.display();
	a2.setval(20);
	a2.display();
	a1.display();

}