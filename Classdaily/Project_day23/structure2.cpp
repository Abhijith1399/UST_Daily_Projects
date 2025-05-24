#include<iostream>
using namespace std;
#define max 5

typedef  struct EmpDetails
{
	int Empid;
	string empName;
}EMP;


typedef struct Periods
{
	int empid;
	int Period_days;
}PEID;

typedef  struct salary_Tax
{
	int empid;
	int salary_base;
	int salary_variable;
	int salary_aliance;
}SAL;

int employe_details(EMP*,PEID*,SAL*);
void dispalay(EMP, PEID, SAL);
int salary(EMP*,PEID*,SAL*);
int Tax(EMP*, PEID*, SAL*);



int Tax(EMP* e, PEID* p, SAL* s)
{
	int taxs, gross;
	gross = s->salary_base + s->salary_variable + s->salary_aliance;
	taxs = gross - (s->salary_variable + s->salary_aliance);               //Gross Salary = Base Salary + Variable Pay + Allowances
	return taxs;		                                     //Taxable Income = Gross Salary - (Exemptions + Deductions)
}

int salary(EMP* e, PEID* p, SAL* s)
{
	int sal;
	sal = s->salary_base * p->Period_days;
	return sal;
}


int employe_details(EMP *e, PEID *p, SAL *s)
{
	cout << "enter the id" << endl;
	cin >> e->Empid;
	cout << "enter the name" << endl;
	cin >> e->empName;
	cout << "enter no of working days" << endl;
	cin >> p->Period_days;
	cout << "enter the base salary" << endl;
	cin >> s->salary_base;
	cout << "enter the variable salary" << endl;
	cin >> s->salary_variable;
	cout << "enter the alliance salary" << endl;
	cin >> s->salary_aliance;
	cout << "=====================" << endl;
	return 0;

}


void display(EMP* e, PEID* p, SAL* s)
{
	cout << "employe id"<<e->Empid << endl;
	cout<<"employee name"<< e->empName << endl;
	cout<<"period days"<< p->Period_days << endl;
	cout<<"base salary"<< s->salary_base << endl;
	cout<< "variable pay"<<s->salary_variable << endl;
	cout<<"alliance"<<s->salary_aliance << endl;

}




int main()
{
	EMP e[max];
	PEID p[max];
	SAL  s[max];

	for (int i = 0;i < 2;i++)
	{
		employe_details(&e[i],&p[i],&s[i]);
		display(&e[i], &p[i], &s[i]);
		cout << "=================="<<endl;
		cout << "total salary==" << salary(&e[i], &p[i], &s[i]) << endl;
		cout << "total taxes==" << Tax(&e[i], &p[i], &s[i]) << endl;
		cout << "==================" << endl;
	}
	
	return 0;

 }