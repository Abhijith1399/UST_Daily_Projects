	/*Q1.Digital Clock Simulation
	Problem:
	Create a class DigitalClock with members hour, minute, and second. Add a function tick() that increments the time by one second and handles overflow.
	*/


	#include<iostream>
	#include "Digital_Clock.h"

	using namespace std;

	void Digital_clock:: sethour(int h)
	{
		hour = h;
	}
	int Digital_clock::gethour()
	{
		return hour;
	}
	void Digital_clock::setminitue(int m)
	{
		minitue = m;
	}
	int Digital_clock::getminitue()
	{
		return minitue;
	}
	void Digital_clock::setsecond(int s)
	{
		second = s;
	}
	int Digital_clock::getsecond()
	{
		return second;
	}
	int Digital_clock::tick()
	{
		hour = 0;
		minitue = 0;
		second = 0;


		for (int i = 0;i <7200;i++)
		{     
			if (second == 60)
			{
				minitue ++;
				second = 0;
			}
			else if (minitue == 60)
			{
				hour ++;
				minitue = 0;
			}
			else if (hour == 24)
			{
				second = 0;
			}
			display();
			second++;
		}
		return 0;
	}
	void  Digital_clock::display()
    {
	cout << second<<endl;
	cout << minitue<<endl;
	cout << hour<<endl;
	
	}

	