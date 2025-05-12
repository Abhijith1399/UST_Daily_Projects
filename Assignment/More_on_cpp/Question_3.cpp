#include<iostream>
using namespace std;
void divisor(int);

void divisor(int num)
{

	for (int i = 1;i <= num;i++)
	{
		if (num%i==0)
		{
			cout << i;
		}
}
}

int main()
{
	int num;
	cout << "enter the number" << endl;
	cin >> num;
	divisor(num);
		return 0;
}