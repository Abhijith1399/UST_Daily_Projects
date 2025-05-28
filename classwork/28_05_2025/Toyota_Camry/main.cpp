#include<iostream>
using namespace std;


class Vehicle
{
protected:
	string make;
	string model;
public:

	Vehicle(string make,string model):make(make),model(model)
	{
		this->make = make;
		this->model = model;
	}
	virtual void start()
	{
		cout << " Starting the Generic Vehicle " << endl;;//<<make<<" "<<model << endl;
	}
	virtual void stop()
	{
		cout << " Stopping  the Generic Vehicle "<<endl;// make << " " << model << endl;
	}
};

class car :private Vehicle
{
private:
	int no_of_doors;
public:

	car(string make, string model):Vehicle(make,model){}

	void honking()
	{
		cout << " Honking the horn of the " << make<<" " << model << endl;
	}
	 void start()
	{
		cout << " Starting the "<<make<<" " << model << endl;
	}
	 void stop()
	{
		cout << " Stopping  the "<<make<<" " << model << endl;
	}
};

int main()
{

	Vehicle v("Toyota", "Carmy");
	v.start();
	v.stop();


	car cobj("Toyota", "Carmy");
	cobj.honking();
	cobj.start();
	cobj.stop();
	

	

}