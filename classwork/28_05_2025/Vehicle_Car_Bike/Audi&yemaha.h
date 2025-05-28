#pragma once
#include"Vehicle.h"
#include"Car&MotorC.h"
#include<iostream>

class Audi :public Car
{
protected:
	string modeltype;
public:

	Audi(string modeltype, int SeatCap, int No_Door, string fuel_Type, int price) :Car(SeatCap, No_Door, fuel_Type, price) { this->modeltype= modeltype; }
	string getmodeltype() { return modeltype; }
	void  disAudi()
	{
		discar();
		cout << "Model Type:" << modeltype<<endl;
	}

};

class yamaha :public MotorCycle
{
protected:
	string Make_type;
public:

	yamaha(string Make_type, int No_of_Cycl, int No_of_gear, int No_of_wheel, int price) :MotorCycle(No_of_Cycl, No_of_gear, No_of_wheel, price)
	{
		this->Make_type = Make_type;
	}
	string getMake_type() { return Make_type; }

	void disyamaha()
	{
		disBike();
		cout << "Make type:" << Make_type << endl;
	}

};