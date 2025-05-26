#include<iostream>
using namespace std;

class Speaker
{
public:
	int watt;
	string color;
	int size;
	string shape;
	int  power_sourse;
	float price;

	
	void display()
	{
		


		cout << "enter the watt" << endl;
		cin >> watt;
		cout << "enter the color" << endl;
		cin >> color;
		cout << " enter the shape;" << endl;
		cin >> shape;
		cout << "enter the power sourse" << endl;
		cin >> power_sourse;
		cout << "enter the price" << endl;
		cin >> price;



		cout << "color=" << color << endl;
		cout << " watt=" << watt << endl;
		cout << "shape=" << shape << endl;
		cout << " power source" << power_sourse << endl;
		cout << "price" << price << endl;


	}
};

	int main()
	{
		Speaker obj;
		

		 obj.display();
		return 0;

	}
	

