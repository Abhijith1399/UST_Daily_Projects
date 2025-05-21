	//#pragma once
	#ifndef __DIGITAL_CLOCK__


	#define ____DIGITAL_CLOCK__

	class Digital_clock

	{

	private:
		int hour;
		int minitue;
		int second;

	public:
		void sethour(int);
		int  gethour();
		void setminitue(int);
		int  getminitue();
		void setsecond(int);
		int  getsecond();
		int tick();
		void display();

	};



	#endif