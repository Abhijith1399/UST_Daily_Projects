#include<iostream>
using namespace std;

typedef struct Employee {
	int E_id;
	char E_name[20];
	char E_desig[30];

}EMP;

int main()
{
	EMP e;
	cin >> e.E_id >> e.E_desig >> e.E_name;
	cout << e.E_id << "\t" << e.E_desig << "\t" << e.E_name << endl;

	
	EMP* e1 = (EMP*)malloc(sizeof(EMP) * 3);
	EMP* temp = e1;

	cin >> e1->E_id >> e1->E_desig >> e1->E_name;   e1++;
	cin >> e1->E_id >> e1->E_desig >> e1->E_name;	 e1++;
	cin >> e1->E_id >> e1->E_desig >> e1->E_name;	

	 e1==temp;
	 cout << e1->E_id << "\t" << e1->E_desig << "\t" << e1->E_name << endl;
	 e1++;

	 cout << e1->E_id << "\t" << e1->E_desig << "\t" << e1->E_name << endl;
	 e1++;
	cout << e1->E_id << "\t" << e1->E_desig << "\t" << e1->E_name << endl;



}