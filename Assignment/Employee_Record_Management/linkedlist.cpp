
#include<iostream>
#include<string>
#include"Employe.h"
#include"Linkedlist.h"
using namespace std;

void Linkedlist::sethead(Employee* h)
{
	head = h;
}
Employee* Linkedlist::gethead()
{
	return head;
}

void Linkedlist::Addemp(int id, string n, float s)

{
	Employee* NewNode = new Employee;
	NewNode->setnext(head);
	NewNode->setEid(id);
	NewNode->setname(n);
	NewNode->setsalary(s);
	head = NewNode;

	if (head != nullptr)
	{
		head = NewNode;
		return;
	}
	else
	{
		Employee* temp = head;
		while (temp->getnext() != nullptr)
		{
			temp = temp->getnext();
			head = NewNode;

		}
		temp->setnext(NewNode);
	}

	
}
void Linkedlist::Display()
{
	Employee* temp = head;
	while (temp != nullptr)
	{
		cout << "Employe Addedd:" << temp->getname() << endl;;
		return;
	}
}
void Linkedlist::DisplayAll()
{
	Employee* temp = head;
	cout << "__________ALL EMPLOYES___________" << endl;
	while (temp != nullptr)
	{
		cout << "ID:" << temp->getEid() << "," << "Name:" << temp->getname() << "," << "salary:" << temp->getsalary();cout << endl;
		temp = temp->getnext();
	}
}
void Linkedlist::Delete(int id)
{
	Employee* ptr1 = head;
	Employee* temp = nullptr;
	while (ptr1 != nullptr)
	{
		if (id == ptr1->getEid())
		{
			if (ptr1->getnext() == nullptr)//first case
			{
				head = nullptr;
				delete ptr1;
				return;
			}
			else
			{
				temp->setnext(ptr1->getnext());
				delete ptr1;
				return;
			}
		}
		temp = ptr1;
		ptr1 = ptr1->getnext();

	}
}
void Linkedlist::Search(string name)
{
	
	Employee* temp = head;
	cout << "_____SEARCH VALUE________" << endl;
	while (temp != nullptr)	
	{
		
		if (name == temp->getname())
		{
		cout << "ID:" << temp->getEid() << "," << "Name:" << temp->getname() << "," << "salary:" << temp->getsalary();cout << endl;
		
		}
		temp = temp->getnext();
	}
}
void Linkedlist::Update(float salary,int id)
{
	Employee* temp = head;
	cout << "_____UPDATE SALARY________" << endl;
	while (temp != nullptr)
	{

		if (id == temp->getEid())

		{
			temp->setsalary(salary);
			cout << "ID:" << temp->getEid() << "," << "Name:" << temp->getname() << "," << "salary:" << temp->getsalary();cout << endl;

		}
		temp = temp->getnext();
	}
}
void Linkedlist::Count()
{
	int count = 0;
	Employee* temp = head;
	
	while (temp != nullptr)
	{
		count++;
		temp = temp->getnext();
	}
	cout << "Total Employees" << count;
}