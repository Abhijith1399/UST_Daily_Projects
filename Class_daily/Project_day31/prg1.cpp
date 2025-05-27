#include<iostream>
using namespace std;

class Test
{
	int x;
	int y;
public:
	Test(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	Test& setx(int);
	int getx();
	void sety(int);
	int gety();
};
Test&  Test::setx(int x)
{
	this->x = x;
	return *this;
}
int Test::getx()
{
	return this->x;
}
void Test::sety(int y)
{
	this->y = y;
}
int Test::gety()
{
	return this->y;
}

int main()
{
}