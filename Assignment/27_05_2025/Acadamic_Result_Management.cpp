#include<iostream>
using namespace std;

class Student
{
private:
	int rollnumber;
protected:
	string Stud_name;
	int Stud_age;
public:

	Student(int rollnum, string Sname, int Sage):rollnumber(rollnum),Stud_name(Sname),Stud_age(Sage){}

	void setStudent(int rollnumber,string Stud_name,int Stud_age)
	{
		this->rollnumber = rollnumber;
		this->Stud_name = Stud_name;
		this->Stud_age = Stud_age;
	}


	int getrollnumber(){return rollnumber;}
	string getStud_name() { return Stud_name;}
	int getStud_age() { return Stud_age;}
	


	void displayStudent()const
	{
		cout << "Student info:" << endl;
		cout << "Rollnumber:" << rollnumber << endl;
		cout << "Name:" << Stud_name << endl;
		cout << "Age:" << Stud_age << endl;
	}

};


class Academic :public Student
{
private:
	int University_Id;
protected:
	int mark1;
	int mark2;
	int mark3;
public:
	Academic(int mark1,int mark2,int mark3,int rollnumber,string Stud_name,int Stud_age ):Student(rollnumber,Stud_name,Stud_age)
	{
		     this->mark1 = mark1;
			this->mark2 = mark2;
			this->mark3 = mark3;
		
	}
	
	
		int getmark1() { return mark1;}
		int getmark2() { return mark2;}
		int getmark3() { return mark3;}

		void totalCalculation()const
		{
			int	total = mark1 + mark2 + mark3;
			float Avg = total /3;

			cout << "Full result:" << endl;
			cout << "Total Mark:"<<total<<endl;
			cout << "Average:" << Avg << endl;
		}
		void displayAcadamic()const
		{
			displayStudent();
			cout << endl;
			totalCalculation();
		}
};

int main()
{
	int rollnumber, mark1, mark2, mark3, Stud_age;
	string Stud_name;
	 
	cout << "Enter  Rollnumber:" << endl;
	cin >> rollnumber;
	cout << "Enter  Student name:" << endl;
	cin >> Stud_name;
	cout << "Enter Age:" << endl;
	cin >> Stud_age;
	cout << "Enter marks:" << endl;
	cin >> mark1 >> mark2 >> mark3;


	Academic Aobj(mark1,mark2,mark3,rollnumber,Stud_name,Stud_age);
	Aobj.displayAcadamic();

}