#include"bid.h"


Bid::Bid(int bidamnt, std::chrono::time_point < std::chrono::steady_clock>time) :bidamnt(bidamnt), bidTime(bidTime){}
int Bid:: getbidamnt()
{
	return this->bidamnt;
}
std::chrono::time_point <std::chrono::steady_clock>Bid::getbidTime()
{
	return this->bidTime;
}