#include<iostream>
using namespace std;
void divisible(int);

void divisible(int num)
{
	if (num == 0)
	{
		return;
	}
	divisible(num - 1);
	if (num % 3 != 0)
		cout << num;



}

int main()
{
	int  num;
	cout << "enter the number:" << endl;
	cin >> num;
	divisible(num);
	return 0;

}