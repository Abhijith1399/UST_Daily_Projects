
#include<iostream>
#include"User.h"
#include <fstream>
#include <string>
#include"Cdr.h"

using namespace std;

void User:: Registraion(map<int, vector<string>>&user)
{
	
	string repasswrd;
	ofstream writ("username.txt");
	cout << "enter the name:" << endl;
	cin >> this->name;
	cout << "enter the phone number:" << endl;
	cin >> this->phone;
	cout << "enter the Username:" << endl;
	cin >> this->username;
	cout << "enter the password:" << endl;
	cin >> this->password;
	cout << " re_enter the password:" << endl;
	cin >>repasswrd;
	if (password !=repasswrd)
	{
		cout << "please enter correct password:" << endl;
	}
	else
	{
		cout << "Registration Sucessfully " << endl;
	}
	user.emplace(phone);
	user.emplace(username);
	user.emplace(name);
	user.emplace(password);
}



void User::login(string username,string password)
{

	cout << "enter the username:" << endl;
	cin >> username;
	if (this->getusername() != username)
	{
		cout << "username not match" << endl;
	}
	
	cout << "enter the password:" << endl;
	cin >> password;
	if (this->password != password)
	{
		cout << "password not match" << endl;
	}


}
void User::signup(map<int, vector<string>>& user)
{
	cout << "signup" << endl;

	cout << "please register:" << endl;
	Registraion(user);
}




