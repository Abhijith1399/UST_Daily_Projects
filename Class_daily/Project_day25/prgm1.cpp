#include<iostream>
using namespace std;

typedef struct date
{
	int day;
	int month;
	int year;
}DAT;

typedef struct emplyoee
{
	int eid;
	string name;
	float salary;
	string depart;
	DAT joining;
 }EMP;

typedef struct personal
{
	int phone;
	string adress;


}PERS;


int Add_employee(EMP*,PERS*,DAT*);
void display_employe(EMP*, PERS*, DAT*);
int  display_yoe(EMP*,DAT*,int*);
//void salary_exp();




int Add_employee(EMP*e, PERS*p, DAT*d)
{
    
	cout << "enter the id " << endl;
	cin >> e->eid;
	cout << "enter the name " << endl;
	cin >> e->name;
	cout << "enter the department" << endl;
	cin >> e->depart;
	cout << "enter the joining date" << endl;
	cin >> d->day;cin >> d->month;cin >> d->year;
	cout << "enter the phone num" << endl;
	cin >> p->phone;
	cout << "enter the adress" << endl;
	cin >> p->adress;

	return 0;

}

void display_employe(EMP* e, PERS* p, DAT* d)
{
	cout << "--------------------------------------"<<endl;
	cout << "id==" << e->eid << endl;
	cout << "name==" << e->name << endl;
	cout << "department==" << e->depart << endl;
	cout << "joining date==" << d->day << "\t" << d->month << "\t" << d->year << endl;
	cout << "phone num==" << p->phone << endl;
	cout << "adress==" << p->adress << endl;
	cout << "--------------------------------------";
}

int  display_yoe(EMP* e, DAT* d, int *expy)
{   
	int cday;
	int cmont;
	int cyear;
	int id;
	
	cout << "enter the eid" << endl;
	cin >> id;
	cout << " enter the joining date" << endl;
	cin >> d->day, d->month, d->year;
	cout << "enter current year" << endl;
	cin >> cday;cin >> cmont;cin>> cyear;
	for(int i=0;i<3 ;i++)
	
		if (id == e[i].eid)
		{
			*expy = cyear - d[i].year;
		
	    }
	return *expy;


}

int main()
{
	int* expy;
	EMP e[3];
	PERS p[3];
	DAT d[3];
	for (int i = 0;i < 1;i++)
	{
		cout << "Enter details for employee " << i + 1 << ":\n";
		Add_employee(&e[i], &p[i], &d[i]);
	}
		for (int i = 0;i < 1;i++)
		{

			cout << " employee " << i + 1 << ":\n";
		display_employe(&e[i], &p[i], &d[i]);
	}

		
		cout<<	display_yoe(e, d,expy);
		

	return 0;
}