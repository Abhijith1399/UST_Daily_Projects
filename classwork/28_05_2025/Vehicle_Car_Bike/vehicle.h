#pragma once
#include<iostream>
using namespace std;

class Vehicle
{
protected:
	int price;
public:
	Vehicle();
	Vehicle(int price) :price(price)
	{	this->price = price;
	}
	int getprice() {
		return price; 
	}
	void disVehicle()
	{
		cout << "Price" << price << endl;
	}
};