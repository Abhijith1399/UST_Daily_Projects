#include<iostream>
#include<string>
using namespace std;

class Vehicle
{
protected:
	string vehicle_id;
	int rate;
	int km;
	int days;
public:
	Vehicle(string vehicle_id,int rate, int km, int days)
	{
		this->vehicle_id = vehicle_id;
		this->days = days;
		this->km = km;
		this->rate;
	}
	void Vehicle_Display()
	{
		cout << "vehicle id:" << vehicle_id << endl;
		cout << "days:" << days << endl;
		cout << "km:" << km << endl;
		cout << "rate:" << rate << endl;
	}
};
class Car :public Vehicle
{
protected:
	string Vehicle_type;
public:
	Car(string vehicle_type, string vehicle_id, int days, int rate, int km) :Vehicle(vehicle_id, days, rate, km)
	{
		this->Vehicle_type = vehicle_id;
	}
	void Carcalculation()
	{
		int dfare = 0;

		   int fare = rate * km;
    		cout << "rate without discount:" << fare << endl;
			if (days > 2)
			{
				dfare = rate * km % 10;
				cout << " Fare with long-term discount:" << dfare;
			}
		
	}
};

class Bike :public Car
{
protected:
	string Vehicle_type;
public:
	Bike(string vehicle_type) :Car( vehicle_type, vehicle_id,  days, rate, km)
	{
		this->Vehicle_type = vehicle_id;
	}
	void Bikecalculation()
	{
		int dfare = 0;
		int fare = rate * km;
			cout << "rate without discount:" << fare << endl;
			if (days > 2)
			{
				dfare = fare % 10;
				cout << " Fare with long-term discount:" << dfare;
			
		    }
	}
};

int main()
{
	string Vehicle_type;
	string vehicle_id;
	int rate;
	int km;
	int day;


	cout << "vehicle type(only small case/large):" << endl;cin >> Vehicle_type;
	cout << "vehicle ID:" << endl;cin >> vehicle_id;
	cout << "Rate:" << endl;cin >> rate;
	cout << "Distance:" << endl;cin >> km;
	cout << "Day:" << endl;cin >> day;


		Car cobj(Vehicle_type, vehicle_id, day, rate, km);
	    cobj.Carcalculation();


	

}