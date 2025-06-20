#pragma once
#include<iostream>
#include<string>
using namespace std;
class User
{
protected:
	string username;
	string name;
	string password;
public:

	User(string name, string password,string username) :password(password), username(username), name(name)
	{
		this->name = name;
		this->username = username;
		this->password = password;
	}
	virtual void  display() = 0;
	 bool checkpassword(string );
	 string getusername();

};