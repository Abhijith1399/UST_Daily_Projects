#include"Teamlead.h"
#include"Developer&Manager.h"
#include"Employee.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int EmpId, Team_size, coding_hour;
	string EmpName;

	cout << "ID:" << endl;
	cin >> EmpId;
	cout << "Name:" << endl;
	cin >> EmpName;
	cout << "Coding Hour:" << endl;
	cin >> coding_hour;
	cout << "Team size:" << endl;
	cin >> Team_size;
	
	Teamlead Tlobj(Team_size, coding_hour, EmpId, EmpName);
	cout << endl;
	Tlobj.Display_Employee();
	Tlobj.Display_All();

}