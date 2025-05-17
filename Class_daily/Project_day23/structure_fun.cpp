#include<iostream>
using namespace std;

typedef struct Employee
{
	int emp_ID;
	int emp_Ph;
	string emp_Name;
	string emp_Adress;
	char emp_Gender;
}EMP;



void display(EMP);
int getemploye(EMP*);


int getemploye(EMP *f)
{
	cout << "enter id" << endl;
	cin >> f->emp_ID;
	cout << "enter name" << endl;
	cin >> f->emp_Name;
	cout << "enter the phone" << endl;
	cin >> f->emp_Ph;
	cout << "enter the adress" << endl;
	cin >> f->emp_Adress;
	cout << "emp gender" << endl;
	cin >> f->emp_Gender;

	return 0;
}

void display(EMP f)
{
	
	
		cout << "emp id=" << f.emp_ID << endl;
		cout << "emp phone" << f.emp_Ph << endl;
		cout << "emp aadress" << f.emp_Adress << endl;
		cout << "emp name" << f.emp_Name << endl;
		cout << "emp gender" << f.emp_Gender << endl;
		cout << "=====================================================" << endl;

}



int main()
{
	EMP e1;
	e1.emp_ID = 101;
	e1.emp_Ph = 9072991475;
	e1.emp_Adress = "ancy bhavan";
	e1.emp_Gender = 'm';
	e1.emp_Name = "Abhi";
	display(e1);



	EMP e[3];
	for (int i = 0;i < 3;i++)
	{
		getemploye(&e[i]);
	}
	for (int i = 0;i < 3;i++)
	{ 
		display(e[i]);
	}
	

	return 0;
}
