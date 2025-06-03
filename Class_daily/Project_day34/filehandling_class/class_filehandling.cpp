#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student
{
	int id;
	string name ;
public:
	student(int id, string name) {
		this->id = id;
		this->name = name;
	}
	void display() {
		cout <<"id=" << id << endl;
		cout << "name=" << name << endl;

	}
};

int main()
{
	student s(101, "Abhijith");
	fstream fIO;
	fIO.open("Test2.txt", ios::in | ios::out | ios::binary);
	{
		if (!fIO.is_open())
		{
			cerr << "erroe: opening file" << endl;
		}
	}
	fIO.write((char*)&s, sizeof(s));
	cout << fIO.tellg() << endl;
	cout << fIO.tellp() << endl;
	s.display();
     
	return 0;
}