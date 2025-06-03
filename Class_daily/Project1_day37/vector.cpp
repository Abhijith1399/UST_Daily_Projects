#include<iostream>
#include<vector>
using namespace std;
class Student
{
	int id;
	string name;
public:
	Student(int id, string name) :id(id), name(name){}
	void display()
	{
		cout << "ID" << id << endl;
		cout << "Name" << name << endl;
	}
};
int main()
{
	Student S[3] = { {101,"abc"},{202,"rty"},{404,"hyi"} };

	Student S1 =  {101,"abc"};
	Student S2 = {101,"abc"};
	Student S3 = { 101,"abc" };
	Student S4 = {101,"abc"};
	for (auto e : S)
	{
		e.display();
	}

	vector<Student>emp;
	emp.push_back(S1);emp.push_back(S3);emp.push_back(S2);emp.push_back(S4);
	for (auto e : emp)
	{
		e.display();
	}cout << emp.capacity() << endl;
	cout << emp.size();
	 emp.front().display();
	 emp.back().display();
	return 0;
}