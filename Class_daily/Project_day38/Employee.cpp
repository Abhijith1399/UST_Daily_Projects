#include<iostream>
#include"Employee.h"
#include<list>
using namespace std;





int main()
{

	list<Employee>liEmploye;
	Employee e1(100, "abhi");
	Employee e2(101, "abhiji");
	Employee e3(102, "abhijith");
	Employee e4(103, "abhijith");

	liEmploye.push_back(e1);
	liEmploye.push_back(e2);
	liEmploye.push_back(e3);
	liEmploye.push_back(e4);

	for (auto i : liEmploye)
	{
		i.display();
		cout << endl;
	}
	liEmploye.remove(e2);
	cout << "============================" << endl;
	for (auto i : liEmploye)
		i.mysort(liEmploye);
	
	cout << endl;
	
	
	cout << endl;


	cout << endl;


}
void Employee::mysort(list<Employee>& liEmploye)
{

	for (auto& i : liEmploye)
	{
		for (auto& j : liEmploye)
		{
			if (i < j)
			{
				auto t = i;
				i = j;
				j = t;
			}
		}
	}

}