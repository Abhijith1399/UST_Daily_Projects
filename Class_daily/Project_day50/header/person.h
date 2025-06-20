#pragma once
#include<iostream>
using namespace std;

class Person
{
protected:
	string Id;
	string name;
	string adress;
public:

	Person() = default;
	Person(string adress, string Id, string name) :Id(Id), adress(adress), name(name) {};
	void setadId(string Id) { this->Id = Id; }string getId() { return Id; }
	void setadress(string adress) { this->adress = adress; }string getadress() { return adress; }
	void setname(string name) { this->name = name; }string getname() { return name; }
};
