#include<iostream>
using namespace std;
template<class T1, class T2>
class Calculator
{
private:
	T1 value;
	T2 value2;
public:
	Calculator(T1 data, T2 data2) :value(data), value2(data2) {}
	void printsum() {
		int sum = value + value2;
		cout << value << "+" << value2 << "=" << sum;

	}
	void printsub() {
		int sub = value - value2;
		cout << value << "-" << value2 << "=" << sub;

	}
	void printdiv() {

		float div = value / value2;
		cout << value << "/" << value2 << "=" << div;
		

	}
	void printmul() {
		int mul= value *value2;
		cout << value << "-" << value2 << "=" << mul;

	}


};


int main()
{
	Calculator<int, int >cob(10, 3);
	cob.printsum();cout << endl;
	cob.printdiv(); cout << endl;
	cob.printmul(); cout << endl;
}