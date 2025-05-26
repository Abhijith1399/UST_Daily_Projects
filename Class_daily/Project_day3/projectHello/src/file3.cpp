

#include<iostream>

using namespace std;
void typcast()
{
	
	int val1 = 19;
	int val2 = 3;
	double res = static_cast<double>(val1) / val2;
	cout << "result" << res << endl;
}