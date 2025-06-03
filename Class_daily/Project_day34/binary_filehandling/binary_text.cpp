
#include<iostream>
#include<fstream>
using namespace std;
struct Employee {
	int id;
	char name[20];
};
int main()
{
	fstream fIO;
	struct Employee e = { 401,"Abhi" };
	fIO.open("Test1.txt", ios::in | ios::out|ios::binary);
	{
		if (!fIO.is_open())
		{
			cerr << "erroe: opening file" << endl;
		}
	}
	fIO.write((char*)&e,sizeof(e));
	struct Employee  e1;
	fIO.read((char*)&e1, sizeof(e1));
	cout << e.id << e.name << endl;
	return 0;
}