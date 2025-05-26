#include<iostream>
using namespace std;

struct Date {
	int day, month, year;
}DAT;

typedef struct adress
{
	int hsno;
	int pincode;
	string address;
	string city;
	string state;
}ADDR;


struct Employe
{
	int id;
	string name;
	struct details {
		int age;
		string nickname;
	}DET;
	Date joiningDate;
	ADDR adrss;
};


int main()
{
	struct Employe e;
	ADDR ad;
	e.id = 101;
	e.name = "abhi";
	e.joiningDate.day = 13;
	e.joiningDate.month = 8;
	e.joiningDate.year = 1999;
	e.adrss.state = "kerela";
	e.adrss.city = "tvpm";
	e.adrss.pincode = 695573;
	e.DET.age = 25;
	e.DET.nickname = "jithu";

	cout << e.id << "\t" << e.joiningDate.month << "\t" << e.adrss.state << endl;;
	cout << e.DET.nickname << "\t" << e.DET.nickname << endl;
	cout << sizeof(Employe) << "\t" << sizeof(Date) << "\t";
	return 0;

}