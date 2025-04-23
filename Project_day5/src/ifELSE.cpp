#include<iostream>
#include <ifELSE.h>
using namespace std;
int ifElse()
{
	int amnInHand;
	cout << "enter your amout:" << endl;
	cin >> amnInHand;

	if (amnInHand <= 10)
	{
		cout << "pls enter more amout" << endl;
	}
	else if (amnInHand >= 10 and amnInHand < 100)
	{
		cout << "you can buy normal meals";
	}
	else if (amnInHand >= 100 and amnInHand < 200) {
		cout << "you can buy normal biriyani";
	}
	else if (amnInHand >= 200 and amnInHand < 300) {
		cout << "you can buy non veg biriyani";
	}
	return 0;
}