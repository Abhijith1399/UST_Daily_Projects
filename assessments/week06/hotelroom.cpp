#include<iostream>
#include<string>
using namespace std;

class Hotelromm
{
private:
	int roomnum;
	string type;
	bool isbook;
	int count;

public:

	Hotelromm(int n, string t)
	{
		count = 0;
		roomnum = n;
		type = t;
		isbook = true;
	}

	void setroomnum(int rn)
	{
		roomnum = rn;
	}
	int getroomnum()
	{
		return roomnum;

	}
	void settype(string tp)
	{
		type = tp;
	}
	string gettype()
	{
		return type;
	}
	void setisbook(bool fa)
	{
		isbook = fa;
	}
	bool getisbook()
	{
		return isbook;
	}
	bool bookroom(int, string);
	void showstatus();


};
bool Hotelromm::bookroom(int n,string t)
{
	

	if (roomnum == n)
	{
		if (isbook == true)
			cout << roomnum << "is already book" << endl;
			return true;
	}
	else
	{
		if (isbook == false)
		{
			count++;
			cout << roomnum <<"room num" << type<<"ac";
			return false;
		}
	}
	return true;

}
void  Hotelromm::showstatus()
{
	if (isbook == false)
	{
		cout << "room is unavailable";
	}
	else
	{
		cout << "room is available";
	}
}


int main()
{


	Hotelromm h1(201, "ac");
	h1.showstatus();
	h1.bookroom(211,"ac");
	h1.showstatus();
	return 0;
}