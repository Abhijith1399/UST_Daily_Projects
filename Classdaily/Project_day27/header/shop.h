//#pragma once
#ifndef  __SHOP__
#define __SHOP__
#include<string>
using namespace std;

class Shop
{

private:
	string itemName;
	int itemId;
	int itemPrice;
	int itemQuantity;
	string arr[5] = { "jimjam","parlie","soap","lays","rice" };



public:
	void setitemName(string);
	string getitemName();
	void setitemId(int);
	int getitemId();
	void setitemPrice(int);
	int getitemPrice();
	void setitemQuantity(int);
	int	getitemQuantity();
	void setarr(string *[]);
	string getarr();
	int tax();
	int additem(string *);
	void remove();
	int update();
	void search();
	void display();
 string item;



};
#endif // !__SHOP__
