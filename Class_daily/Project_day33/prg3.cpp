#include<iostream>
using namespace std;

class Student
{
protected:
	int stdid;
	string stdname;
	string dept;
	int phone;

public:
	Student(int stdid, string stdname, string dept, int phone) :stdid(stdid), stdname(stdname), dept(dept), phone(phone) {
		this->dept = dept;
		this->phone = phone;
		this->stdid = stdid;
		this->stdname = stdname;
	}
	virtual void display() const = 0;

};


class Mark : public Student
{
protected:
	int mark1;
	int mark2;
	int mark3;
public:
	Mark(int mark1, int mark2, int mark3, int stdid, string stdname, string dept, int phone) :Student(stdid, stdname, dept, phone),
		mark1(mark1), mark2(mark2), mark3(mark3) {
		this->mark1 = mark1;
		this->mark2 = mark2;
		this->mark3 = mark3;
	}

    void display()
	{
		cout << "std name=" << stdname << endl;
		cout << "std id=" << stdid << endl;
		cout << "dept=" << dept << endl;
		cout << "phone number=" << phone << endl;
		cout << "mark1=" << mark1 << endl;
		cout << "mark2=" << mark2<< endl;
		cout << "mark3=" << mark3<< endl;
	}
};



class Sports : public Student
{

protected:
	string item;
	string grade;
public:
	Sports(string item, string grade, int stdid, string stdname, string dept, int phone) :Student(stdid, stdname, dept, phone),
		item(item), grade(grade)
	{
		this->grade = grade;
		this->item = item;
	}
virtual	void display()
	{
		display();
		cout << "grade=" << grade << endl;
		cout << "item=" << item << endl;
	}

};

class Admin :public Student, public Sports, public Mark
{
protected:
	string Add;
	string del;
public:


	void display()
	{
		display();
		display();
		display();
	}
};
void dispFunc(Student* s)
{
	cout << "DispFunc got called" << endl;
	s->display();
}

int main()
{

	Mark* M=new Mark(20, 30, 40, 666, "Abhi", "cse", 876500000);
	dispFunc(M);
	//Sports* Sobj = new Sports("cricket","first");
	

	

}