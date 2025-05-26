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


int main()
{
	EMP e1;
	e1.emp_ID = 101;
	e1.emp_Ph = 9072991475;
	e1.emp_Adress = "ancy bhavan";
	e1.emp_Gender = 'm';
	e1.emp_Name = "Abhi";
	cout << "Size of emp" << sizeof(EMP) << "Size=" << sizeof(e1) << endl;
	cout << "emp id=" << e1.emp_ID << endl;
	cout << "emp phone" << e1.emp_Ph << endl;
	cout << "emp aadress" << e1.emp_Adress << endl;
	cout << "emp name" << e1.emp_Name << endl;
	cout << "emp gender" << e1.emp_Gender << endl;



	EMP e[3];
	for (int i = 0;i < 3;i++)
	{
		cout << "enter id" << endl;
		cin >> e[i].emp_ID;
		cout << "enter name" << endl;
		cin >> e[i].emp_Name;
		cout << "enter the phone" << endl;
		cin >> e[i].emp_Ph;
		cout << "enter the adress" << endl;
		cin >> e[i].emp_Adress;
		cout << "emp gender" << endl;
		cin >> e[i].emp_Gender;
	}
	for (int i = 0;i < 3;i++)
	{
		cout << "emp id=" << e1.emp_ID << endl;
		cout << "emp phone" << e1.emp_Ph << endl;
		cout << "emp aadress" << e1.emp_Adress << endl;
		cout << "emp name" << e1.emp_Name << endl;
		cout << "emp gender" << e1.emp_Gender << endl;
		cout << "=====================================================" << endl;
	}


	return 0;
}
