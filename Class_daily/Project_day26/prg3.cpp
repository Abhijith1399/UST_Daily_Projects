#include<iostream>
using namespace std;

class Student
{
private:
	string Admn;
	float mark[8];
	string Adress;
	int id_num;
	string name;
	string dept;

	void setStud(string an, string Ad,string n,string dt )

	{
		Admn = an;	
		Adress = Ad;
		name = n;
		dept = dt;
	}

	string getStud()
	{
		return Adress, Admn,name,dept;
	}
	void setId(int id)
	{
		id_num = id;
	}
	int getId()
	{
		return id_num;
	}
	void setmark(float m[])
	{
		for (int i = 0;i < 5;i++)
		{
			mark[i] = m[i];
		}
	}


private:
	float calcAvg() {
		float avg = 0.0;
		for (int i = 0;i < 4;i++) {
			cout << mark[i] << "\t";
			avg += mark[i];
		}
		return avg / 4.0;
	}
	void display()
	{
		cout << "name=" << name << endl;
		cout << "id=" << id_num << endl;
		cout << "adress" << Adress << endl;
		cout << "Admission num" << Admn << endl;
		cout << "dept" << dept << endl;
		cout << "average" << calcAvg << endl;

	}

};
int main()
{
	Student obj;
	obj.display();
}
