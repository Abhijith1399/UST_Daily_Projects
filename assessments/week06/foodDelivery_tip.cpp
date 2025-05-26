#include<iostream>
#include<string>
using namespace std;

class Deliverytip
{
private:
	int orderid;
	int billamnt;
	float kilometer;
	int tip;
public:

	Deliverytip(int oid, int amt, float km)
	{
		orderid = oid;
		billamnt = amt;
		kilometer = km;	
		tip = 0;
	}

	void setorderid(int);
	int getorderid();
	void setbillamnt(int);
	int getbillamnt();
	void setkilometer(float);
	float getkilometer();
	void settip(int);
	int getip();
	int calculatetip(float,int);
	void printDetails();


};
void  Deliverytip::setorderid(int oid)
{
	orderid = oid;
}
int  Deliverytip::getorderid()
{
	return orderid;
}
void Deliverytip::setbillamnt(int bt)
{
	billamnt = bt;
}
int  Deliverytip::getbillamnt()
{
	return billamnt;
}
void Deliverytip::setkilometer(float km)
{
	kilometer = km;
}
float Deliverytip::getkilometer()
{
	return kilometer;
}
void Deliverytip::settip(int t)
{
	tip = t;
}
int Deliverytip::getip()
{
	return tip;
}
int Deliverytip::calculatetip(float km,int amt )
{
	if (km <= 5)
	{
		tip = 5 * amt / 100;
	}
	 else if (km >= 5 && km <= 10)
	{
		tip = 10 * amt / 100;
	}
	 else	if (km > 15)
	{
		tip = 15 * amt / 100;
	}
	//cout << tip;
	return tip;

}
void Deliverytip::printDetails()
{
	cout << orderid << "order id" << endl;
	cout << calculatetip(kilometer,billamnt)<<"tip";
}



int main()
{
	Deliverytip obj(100, 500, 8);
	obj.printDetails();


}