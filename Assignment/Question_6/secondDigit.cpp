#include<iostream>
using namespace std;
int main()
{
	int n;
	int temp = 0;
	cout << "enter the number" << endl;
	cin >> n;

	temp = n % 10;
	n = (n / 10)%10;
	
	cout << n;


}
