#include<iostream>
//1 more basic


#include<cmath>
using namespace std;
int main()
	{

	int A, R, T, P,C;
	cout << "enter the principle" << endl;
	cin >> P;
	cout << "enter the rate" << endl;
	cin >> R;
	cout << "enter the time" << endl;
	cin >> T;
	A = P * (1 + R / 100) ^ T;
	C = A - P;
	cout << A << endl;
	cout << "compont Intrest=" << C << endl;

}