#include<iostream>
#include<cstring>
using namespace std;

class Lugguage
{
private:
	string passname;
	float passweight;
	float weight;
public:
	Lugguage(string n, float we)
	{
		passname = n;
		passweight = we;
		weight = 20;
	}
	void setpassname(string);
	string getpassname();
	void setpassweight(float);
	float getpassweight();
	void setweight(float);
	float getweight();
	
	void checkweights()
	{

		if (passweight <= weight)
		{
			cout << "within limit" << endl;
		}
		else
		{
			float t = passweight - weight;
			cout << "else over weight" << t << endl;
		}
	}

};
	void Lugguage:: setpassname(string n)
	{
		passname = n;
	}
	string Lugguage::getpassname()
	{
		return passname;
	}
	void  Lugguage::setpassweight(float p)
	{
		passweight = p;
	}
	float  Lugguage::getpassweight()
	{
		return passweight;
	}
	void  Lugguage::setweight(float we)
	{
		weight = we;
	}
	float Lugguage::getweight()
	{
		return weight;
	}
	


int main()
{
	Lugguage obj("fgdgs", 68.0);
	obj.checkweights();
	return 0;
}