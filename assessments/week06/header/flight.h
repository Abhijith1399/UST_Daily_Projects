//#pragma once
#ifndef __FLIGHT__
#define __FLIGHT__
#include<string>
using namespace std;


class Flight
{
private:
	string flight_Num;
	int total_seat=100;
	int seat_num;

public:


	Flight(string fn, int ts)
	{	
		cout << "flight num:" << flight_Num << " total Seat Availabile:" << total_seat << endl;;
	}
	


	void setflight_Num(string);
	string getflight_num();
	void settotal_seat(int);
	int gettotal_seat();
	void setseat_num(int);
   int getseat_num();
	void bookseat(int);
	int showAvailabile(int);


};
#endif // !__FLIGHT__


