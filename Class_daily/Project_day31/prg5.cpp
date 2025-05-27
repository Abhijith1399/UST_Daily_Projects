#include<iostream>
using namespace std;

class vehicle
{
protected:
	int wheel;
	int seat;
	string operation;

public:
	int setvehicle(int wheel,int seat,string operation)
	{
		this->operation = operation;
		this->seat = seat;
		this->wheel = wheel;
	}

};

class car :public vehicle
{

private:
	string car;
	string bus;
	string cycle;
public:
	void setitem()
	{
		cout << "enter the number of seat" << endl;
		cin >> seat;
		cout << "enter the number of wheeel" << endl;
		cin >> wheel;
		cout << "enter the operation=" << endl;
		cin >> operation;
	}

	void vehicless()
	{
		if ((wheel == 4)&&(seat==4))
		{
			cout << "------its car-----" << endl;
			cout << "wheel=" << wheel<<endl;
			cout << "seat=" << seat<<endl;
			cout << "operation=" << operation<<endl;
		}
		else if ((wheel == 6) && (seat == 6))

		{
			cout << "------its bus------" << endl;
			cout << "wheel=" << wheel << endl;;
			cout << "seat=" << 6<<endl;
			cout << "operation=" << operation << endl;
		}
		else if ((wheel == 2) && (seat == 2))

		{
			cout << "--------its cycle-------" << endl;
			cout << "wheel=" << wheel<<endl;
			cout << "seat=" << seat<<endl;
			cout << "operation" << operation<<endl;
		}

	}
};

int main()
{
	car c;
	c.setitem();
	c.vehicless();

	return 0;

}