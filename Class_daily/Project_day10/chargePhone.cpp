#include<iostream>
using namespace std;
int main()
{
	int charge,mobilestatus;
	cout << "moble status 1/0";
	cin >> mobilestatus;

	
	if (mobilestatus == 1)
	{
		cout << "enter the charge" << endl;
		cin >> charge;
		if (charge <= 10)
		{
			cout << "phone is low charge" << endl;
		}
		cout << "you can play" << endl;
		cout << "what do yo do?" << endl;
	}
	else
	{
		cout << "powering on moble,put charge" << endl;
		{
			cout << "enter the charge" << endl;
			cin >> charge;
			if (charge <= 10)
			{
				cout << "phone is low charge" << endl;
			}
			cout << "you can play" << endl;
			cout << "what do yo do?" << endl;
		}



	}
	return 0;
}