#pragma once
#include<iostream>
#include"Animal.h"

class cat :public Animal
{
public:
	void Catmake()
	{
		cout << "cat sound like:" << endl;
	}

	void Sound()
	{

		cout << "meaoww...." << endl;
	}
};
