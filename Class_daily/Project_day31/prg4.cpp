#include<iostream>
using namespace std;

class Num 
{
protected:
	int num1, num2;
public:
	void setnum(int num1, int num2)
	{
		this->num1 = num1;
		this->num2 = num2;
	}
};


class Multi :public Num
{
private:
	int prod;
public:

	void setValue()
	{
		cout << " enter num1 and num2" << endl;
		cin >> num1 >> num2;
	}
	int multi()
	{
		prod = num1 * num2;
		return prod;
	}

};

int main()
{
	Multi mobj;
	mobj.setValue();

	cout << "product" << mobj.multi() << endl;
}