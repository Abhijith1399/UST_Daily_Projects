#pragma once
#include<iostream>
#include"user.h"
#include<string>
#include<chrono>

class Bid 

{
	int bidamnt;
	std::chrono::time_point < std::chrono::system_clock>bidTime;
public:
	Bid(int, std::chrono::time_point < std::chrono::system_clock>);
		int getbidamnt();
		std::chrono::time_point < std::chrono::system_clock>getbidTime();
};