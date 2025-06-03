#include<iostream>
using namespace std;
template<class T ,class T2>
class Box
{
private:
	T data;
	T2 data2;
public:
	Box(T value, T2 value2):data(value),data2(value2){}
	void printData() { cout << "Data=" << data<<"Data2"<<data2; }
};

int main()
{
	Box<int,float>intBox(10, 12.3);
	Box<float, string>stringbox(12.3, "abcd");

	intBox.printData();
	stringbox.printData();
}