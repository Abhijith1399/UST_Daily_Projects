#include<iostream>
using namespace std;
class Animal
{
public:
	void eat()
	{
		cout << "Eat"<<endl;
	}
	void walk()
	{
		cout << "walk"<<endl;
	}
	void makesound()
	{
		cout << "make sound"<<endl;
	}
	virtual void makesoundlike()
	{
		cout << "Animal sound" << endl;
	}
};

class cat : public Animal
{
public:
	void displayCat()
	{
		cout << "cat can:"<<endl;
	}
	void makesoundlike()
	{
		cout << "meow.............." << endl;
	}
};

class dog : public Animal
{
public:
	void displaydog()
	{
		cout << "dog can:"<<endl;
	}
	void makesoundlike()
	{
		cout << "bow.........." << endl;
	}
};


int main()

{
	cat c;
	dog d;
	Animal* a;
	a = &d;
	a = &c;

	
	c.displayCat();
	c.eat();
	c.walk();
	c.makesound();
	c.makesoundlike();
	cout << "++++++++++++++++++++++++" << endl;
	d.displaydog();
	d.eat();
	d.walk();
	d.makesound();
	d.makesoundlike();
	cout << "++++++++++++++++++++++++" << endl;
	c.displayCat();c.eat();c.makesound();c.makesoundlike();c.walk();
	cout << "++++++++++++++++++++++++" << endl;
	d.displaydog();d.eat();d.makesound(), d.makesoundlike();c.walk();

}