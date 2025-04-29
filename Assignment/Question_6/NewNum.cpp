#include<iostream>
using namespace std;
void add(int, int);

int main()
{
	int var1;
	int var2;

	cout << "enter the first num1" << endl;
	cin >> var1;
	cout << "enter the second num2" << endl;
	cin >> var2;

	int lastnum = var1 % 10;
	int firstdigit;
	while (var2 >0)
	{
		
		firstdigit = var2 % 10;
		 var2=var2 / 10;
		
	}
	cout << lastnum;
	cout << (firstdigit % 10);

	
}