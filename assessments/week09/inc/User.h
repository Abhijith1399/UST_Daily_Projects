#pragma once
#include"User.h"
#include<iostream>
#include<map>
#include<vector>
using namespace std;

class User
{
private:
	string username;
	string password;
	string name;
	int phone;
	map<string, vector<string>>user;

public:

	User()
	{}
	void setname(string name) { this->name = name; }string getname() { return name; }
	void setusername(string username) { this->username = username; }string getusername() { return username; }
	void setpassword(string password) {	this->password = password;}string getpassword() { return username; }
	void setphone(int phone) { this->phone=phone; } int getphone() { return phone; }

	void Registraion(map<int, vector<string>>&user);
	void login(string,string);
	void signup(map<int, vector<string>>&user);

	
};



