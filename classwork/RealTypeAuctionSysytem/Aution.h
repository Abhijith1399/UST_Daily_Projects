#pragma once
#include<string>
#include<queue>
#include"bid.h"
#include"buyer.h"
#include<thread>
#include<condition_variable>
#include<mutex>

using namespace std;
class Auction
{
	string itemname;
	int minamnt;
	priority_queue<Bid>itembids;
	bool isActive;
	condition_variable cv;
	void biddingTime();


public:
	Auction(string, int);
	bool operator<(const Bid&) const;
	void takeBid(Buyer &, int);
	void resultDeclaration();
};