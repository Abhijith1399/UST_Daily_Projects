#pragma once
#include"vehicle.h"
#include<iostream>
using namespace std;

class Car:public Vehicle
{
protected:
	int SeatCap;
	int No_Door;
	string fuel_Type;
public:
	//Car();
		Car(int SeatCap,int No_Door,string fuel_Type,int price):Vehicle(price)
		{
			this->fuel_Type = fuel_Type;
			this->No_Door = No_Door;
			this->SeatCap = SeatCap;
		}
		string getfuel_Type() { return fuel_Type; }
		int getNo_Door() { return No_Door; }
		int getSeatCap() { return SeatCap; }

		void discar()
		{
			disVehicle();
			cout << "fuel Type:" << fuel_Type << endl;
			cout << "Door:" << No_Door << endl;
			cout << "Seat capacity:" << SeatCap << endl;
		}

};

class MotorCycle:public Vehicle
{
protected:
	int No_of_Cyl;
	int No_of_gear;
	int No_of_wheel;
public:
	//MotorCycle();
	MotorCycle(int No_of_Cycl,int No_of_gear,int No_of_wheel,int price):Vehicle (price)
	{
		this->No_of_Cyl = No_of_Cycl;
		this->No_of_gear = No_of_gear;
		this->No_of_wheel = No_of_wheel;
	
	}

	void disBike()
	{
		disVehicle();
		cout << "No of cylinder:" << No_of_Cyl<<endl;
		cout << "No of wheel:" << No_of_wheel << endl;
		cout << "No of gear:" << No_of_gear << endl;
		//cout << "price:" << price << endl;
	}
};
