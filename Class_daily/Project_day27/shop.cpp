
#include<iostream>
#include"shop.h"
#include<string>
using namespace std;




void  Shop::  setitemName(string in)
{
	itemName = in;
}
string  Shop::getitemName()
{
	return itemName;
}
void  Shop::setitemId(int id)
{
	itemId = id;
}
int  Shop::getitemId()
{
	return itemId;
}
void Shop::setitemPrice(int ip)
{
	itemPrice = ip;
}
int  Shop::getitemPrice()
{
	return itemPrice;
}
void  Shop::setitemQuantity(int iQ)
{
	itemQuantity = iQ;
}
int Shop::getitemQuantity()
{
	return itemQuantity;
}
void  Shop::setarr(string *ar[])
{
	for (int i = 0;i < 5;i++)
	{
		arr[i] = *ar[i];
	}
	
	
}
string  Shop::getarr()
{
	return arr[5];
}
int  Shop::tax()
{

}
int Shop::additem( string *ar)
{

	cout << " enter the item" << endl;
	cin >> item;
	for (int i = 0;i < 5;i++)
	{
		ar[i] ==item;
	}
	cout << "Add item" << endl;
	return 0;

}
void Shop::remove()
{

}
int Shop::update()
{

}
void Shop::search()
{

}
void Shop::display()
{

}

