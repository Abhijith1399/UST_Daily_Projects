#include<iostream>
#include<memory>
using namespace std;

class Rectangle
{
	int l, b;
public:
	Rectangle(int a,int c):l(a),b(c){}
	void area()
	{
		cout << l * b << endl;
	}
};

int main()
{
	unique_ptr<Rectangle>uptr (new Rectangle(4, 7));
	uptr->area();
}