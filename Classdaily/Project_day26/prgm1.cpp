#include<iostream>
using namespace std;
class Student
{
protected:
	int rollno;
	string name;
	string dept;

public:
	void display( string str1)
	{
		//cout << "hello"<<str1<<endl;
		cout << "name:" << name << endl;
		cout << "roll num=" << rollno << endl;
		cout << "dept=" << dept << endl;

	
	}
	void setName(string s, int r,string d)

	{
		name = s;
		rollno = r;
		dept = d;
	
	}
	
	

 };
int main()
{
	Student obj;
	cout << sizeof(obj) << endl;

	//string str1 = "abhijith";
	//obj.display("jithu");



	obj.setName("Abhijith",101,"cse");
	obj.display("");
	
	//s.rollno = 101;
//	s.dept = "cse";
	//s.name = "abhijith";

	return 0;
}