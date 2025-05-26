#include<iostream>
#include"flight.h"
#include<string>
using namespace std;



void Flight::setflight_Num(string fn)
{
	flight_Num = fn;
}
string Flight::getflight_num()
{
	return flight_Num;
}
void Flight::settotal_seat(int ts)
{
	total_seat = ts;
}
int Flight::gettotal_seat()
{
	return total_seat;
}
void Flight::setseat_num(int sn)
{
	seat_num = sn;
}
int Flight::getseat_num()
{
	return seat_num;
}
int Flight::showAvailabile(int n)
{
	cout << "enter  how many seat" << endl;cin >> n;
	total_seat -= n;
	cout <<  "seat available"<<total_seat;
	return 0;
	
}
void Flight::bookseat(int n)
{
	cout << " enter seat remaining seat to book==" << total_seat;
	cin >> n;
	total_seat -=  n;

	if ((n < total_seat)&&(total_seat<100))
	{
		cout << "no seat available";
	}
	else
	{
		cout << "book seat";
	}

}
