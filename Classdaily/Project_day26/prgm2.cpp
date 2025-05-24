#include<iostream>
using namespace std;

class Student {
	protected:
		int rollno;
		string name;

public :
	void setname(string s)
	{
		name = s;
	}

	string  getname()
	{
		return name;
	}


	void  setrollno(int r)
	{
		rollno = r;

	}
	int getrollno()
	{
		return rollno;
	}

	void display()
	{
		cout << "name=" << name<<endl;
		cout << "roll no=" << rollno << endl;
	}

};

int main()
{

	string n = "abhi";
	string de = "jith";
	int r = 101;
	Student obj;
	obj.setrollno(r);
	obj.setname(n);
	obj.display();
	cout << obj.getname() << endl;
	cout << obj.getrollno() << endl;
	de += obj.getname();
	cout << de << endl;
	return 0;

}