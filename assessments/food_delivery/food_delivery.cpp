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

	Deliverytip(int oid,int amt,int km)
	{
		cin >> oid;
		cin >> amt;
		cin >> km;

	}

	void setorderid(int);
	int getorderid();
	void setbillamnt(int);
	int getbillamnt();
	void setkilometer(float);
	float getkilometer();
	void settip(int);
	int getip();
	int calculatecount();
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
void Deliverytip::settip(int)
{

}
int Deliverytip::getip()
{

}
int Deliverytip::calculatecount()
{

}
void Deliverytip::printDetails()
{

}



int main()
{
	Deliverytip obj(0,0,0);



}