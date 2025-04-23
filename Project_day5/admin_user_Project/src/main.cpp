#include<iostream>
using namespace std;

typedef struct 
{
	int user_id;
	int user_type;
	string user_name;
}USERS;

string admin_ID = "010";

void UsersMENU();
void AdminMENU();

int main()
{
	USERS usr_;
	cout << "enter the  ID" << endl;
	cin >> usr_.user_id;
	cout << "enter the user type" << endl;
	cin >> usr_.user_type;
	cout << "enter the user name" << endl;
	cin >> usr_.user_name;

	if (usr_.user_id <= 100)
	{
		UsersMENU();
	}
	else if (admin_ID == "010")
	{
		AdminMENU();
	}
}
	void UsersMENU() 
	{
		cout << "food" << endl;
		cout << "menu" << endl;
		cout << "food" << endl;


	}

	void AdminMENU()
	{
		cout << "name of employee" << endl;
		cout << "salary of employee" << endl;
		cout << "food and price and paid" << endl;


	}
	
