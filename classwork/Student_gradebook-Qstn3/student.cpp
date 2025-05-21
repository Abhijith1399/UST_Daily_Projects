
/* Student Gradebook
Problem:
Create a class Student with marks in 3 subjects. Add a function calculateAverage() and
getGrade() that returns 'A', 'B', or 'C' based on the average. Display details using another function.*/




#include<iostream>
#include"student.h"
#include<string>
using namespace std;


void Student:: setstdname(string sn)
{
	stdname = sn;
}
string Student::getstdname()
{
	return stdname;
}
void Student::setstdId(int id)
{
	stdId = id;
}
int Student::getstdId()
{
	return stdId;
}
void Student:: setdept(string dt)
{
	dept = dt;
}
string Student::getdept()
{
	return dept;
}
void Student::setavg(float ag)
{
	avg = ag;
}
float Student::getavg()
{
	return avg;
}
void Student::setmaths(int mas)
{
	maths = mas;
}
int Student::getmaths()
{
	return maths;
}
void Student::setphy(int ps)
{
	phy = ps;
}
int Student::getphy()
{
	return phy;
}
void Student:: setchem(int cy)
{
	chem = cy;
}
int Student::getchem()
{
	return chem;
}

void Student::get_mark()
{
	cout << "enter the maths mark" << endl;
	cin >> maths;
	cout << " enter the physics mark" << endl;
	cin >> phy;
	cout << " enter the chemistry mark" << endl;
	cin >> chem;
}

int Student::average()
{
	//get_mark();
	avrgs = (maths + phy + chem) / 3;
	cout << " average=" << avrgs << endl;
	total = maths + phy + chem;
	cout << "Total=" << total << endl;
	return avrgs;

}
void Student::grade()
{
	//average();

	if (total <= 100)
	{
		cout << " grade=c" << endl;
	}
	else if (total <= 125)
	{
		cout << "grade = B" << endl;
	}
	else if (total <= 150)
	{
		cout << "grade=A" << endl;
	}
}
void  Student::studentPersonal()
{

	cout << "name=" << stdname << endl;
	cout << " department=" << dept << endl;
	cout << " Id number=" << stdId << endl;
}
void Student:: display()
{
	get_mark();
	average();
	grade();
}
