#include<iostream>
#include"student.h"
#include<string>
using namespace std;

int main()
{
	Student obj;

	obj.setstdname("Abhijith");
	obj.setdept("cse");
	obj.setstdId(101010);
	obj.studentPersonal();
	obj.display();
	return 0;

}