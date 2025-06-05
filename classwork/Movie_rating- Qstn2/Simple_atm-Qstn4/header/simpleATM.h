//#pragma once
#ifndef __ SIMPLEATM__

#define __SIMPLEATM__
#include<string>
using namespace std;

class simple
{

private:
	int acntNum=101010;
	int acntbal=1000;

public:
	int deposit();
	int withdraw();
	int menu();
	void setacntNum(int);
	int getacntNum();
	void setacntbal(int);
	int getacntbal();
	void balance();
	int anum;
};
#endif