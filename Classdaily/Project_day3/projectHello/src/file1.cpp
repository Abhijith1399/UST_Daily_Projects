

#include <iostream>
#include "file3.cpp"
#include "file2.cpp"
using namespace std;
int fun(int);
int concat();
void typcast();
class Test

{
	mutable int counter;
public: void update()const{
	counter++;

}


};
int main()
{
	typcast();
	concat();
	int r = 100;
	int ret = fun(r);
	cout << ret << endl;
	return 0;
}
int fun(int v)
{
	static int temp = 300;
	temp = temp + v;
	return temp;
}
