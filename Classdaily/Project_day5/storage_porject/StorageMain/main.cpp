#include<iostream>
using namespace std;
#define  maxCapacity 100;
int main() {



	int availCapacity, currentCapacity;
	cout << "enter the current capacity" << endl;
	cin >> currentCapacity;
	availCapacity = maxCapacity - currentCapacity;
	if (availCapacity <= 0)
	{
		cout << "\n\t Storage is full \n" << endl;
		exit(0);
	}
	cout << "\n\t Storage is not full you can store \n" << endl;
}