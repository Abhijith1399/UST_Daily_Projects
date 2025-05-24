#include<iostream>
#include <math.h>
using namespace std;
bool Nthprime(int);
void display(int,int);

bool Nthprime(int num)
{
	int i;
	if (num <=1)
		return false;
	for (i = 2;i < num;i++)

		if (num % i == 0)
			return false;
		else
			return true;
}

void display(int num,int num2)
{

	bool found = false;
	for (int i = num;i <= num2;i++)

	{
		
		if (Nthprime(i))
		{
			cout << i;
			found = true;
		}
		
			if (!found)
			{
				cout << "no prime;";
			}
	}
}


int main()
{
	int num;
	int num2;
	cout << "enter the number1" << endl;
	cin >> num;
	cout << "enter the number2" << endl;
	cin >> num2;

	Nthprime(num);
	return 0;

}