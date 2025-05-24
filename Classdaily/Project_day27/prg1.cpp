#include<iostream>
using namespace std;

class Emp
{
public :
	int empId;
	string empName;

public:
	void init(int id, string name)
	{
		empId = id;
		empName = name;
	}
	void printDetails()
	{
		cout << empId << empName << endl;

	}


	Emp()  //constructor  default
	{
		cout << " default constructor is called" << endl;
		empId = 101;
		empName = "dhghjw ";
	}

	// parantised constructor
	Emp(int id, string name)
	{
		cout << " parameter constructer" << endl;
		empId = id;
		empName = name;
	}

	void disp()
	{
		cout << " display constructor" << endl;
		cout << empId << empName;
	}
	//destructor
public:
	~Emp()
	{
		cout << "distructor call" << endl;
	}

};





int main()
{
	Emp obj;
//	obj.empId = 101;
//	obj.empName = " abhi";
	//Emp* ptr = &obj;
	//ptr->empId = 1001;
	obj.disp();

	//cout << obj.empId << obj.empName << endl;


	Emp obj1(1111,"Abhij");
	obj1.disp();
	



	Emp obj2(obj1);
	obj2.disp();


	Emp obj3 = obj2;
	obj3.disp();
	//obj.init(1111, "jithu");
	//obj.printDetails();

	return 0;
	
}
