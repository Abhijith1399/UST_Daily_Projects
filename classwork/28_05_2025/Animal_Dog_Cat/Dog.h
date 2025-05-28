#pragma once
#include<iostream>
#include"Animal.h"
#include"Cat.h"
#include<string>

using namespace std;
class Dog :public Animal
{
public:

	void Dogmake()
	{
		cout << "Dog sound like:" << endl;
	}

	void Sound()
	{
		
		cout << "bark...." << endl;
	}
 };
