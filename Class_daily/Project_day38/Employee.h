	#pragma once
	#include<iostream>
	using namespace std;

	class Employee
	{
		int  Id;
		string Ename;
		int i = 0;
		int j = 0;
	public:
		Employee(int Id, string Ename) :Id(Id), Ename(Ename)
		{
			this->Ename = Ename;
			this->Id = Id;
		

	 }
		void setId(int Id) { this->Id = Id; }int getId() { return Id; }
		void setName(int Ename) { this->Ename = Ename; }string getIEname() { return Ename; }

		void mysort(list<Employee>& liEmploye);
		


		void display()
		{
			cout << "ID=" << Id << "|" << "Name" << Ename;
		}

			bool operator==(const Employee & other)const
			{
				return Id == other.Id;

			}
			bool operator<(const Employee & other)const
			{
				return Ename <other.Ename;

			}
		

	
	};
