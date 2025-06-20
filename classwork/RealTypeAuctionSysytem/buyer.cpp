#include"buyer.h"
#include<iostream>

Buyer::Buyer(string name,string username,string password):User(name,username,password){}

void Buyer::addBid(string item, int amount)
{
	Bid b(amount, chrono::system_clock::now());
		buyerBids.insert({ item,b });
}
void Buyer::display()
{
	cout << "name:" << name << endl;
	cout << "username:" << username << endl;

	for (auto& p : buyerBids)
	{
		time_t t = chrono::system_clock::to_time_t((p.second).getbidTime());
		cout << p.first << "_______" << p.second.getbidamnt() << "-----" <<ctime(&t)<<endl;
	}
}