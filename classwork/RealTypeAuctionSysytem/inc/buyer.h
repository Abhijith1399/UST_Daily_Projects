#pragma once
#include<iostream>
#include"user.h"
#include<string>
#include"bid.h"
#include<unordered_map>
using namespace std;

class Buyer :public User

{
	unordered_map<string, Bid>buyerBids;
	public:
		Buyer(string, string, string);
		void addBid(string, int);
		void display();
};