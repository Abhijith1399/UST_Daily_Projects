#include<iostream>
#include<string>
using namespace std;

class Hotelromm
{
private:
	int roomnum;
	string type;
	bool isbook;

	
public:

	Hotelromm(int n, string type)
	{
		cout <<"room" << n<<endl;
		roomnum = n;
		cout << "type=" << type;
		cout << "room is booked" << endl;
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
	int bookroom(int);
	void showroom();


};
int Hotelromm:: bookroom(int n)
{
	cout << " enter room num" << endl;
	cin >> n;
	if (roomnum == n)
	{
		cout << "room is already booked" << endl;
	}
	return 0;

}
void  Hotelromm::showroom()
{

}


int main()
{


	Hotelromm h1(201,"ac");
	h1.bookroom(0);
	return 0;
}