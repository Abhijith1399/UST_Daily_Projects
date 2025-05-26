#pragma once

#define __LINKEDLIST__
#include<iostream>
#include<string>
#include"Employe.h"
using namespace std;

class Linkedlist
{
private:
	Employee* head;
public:
	Linkedlist()
	{
		head = nullptr;
	}
	void sethead(Employee*);
	Employee* gethead();
	
	void Addemp(int,string,float);
	void Display();
	void DisplayAll();
	void Delete(int);
	void Search(string);
	void Update(float,int);
	void Count();

};