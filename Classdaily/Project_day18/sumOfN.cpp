#include<iostream>
using namespace std;
int sum(int ,int);
int main()
{
	int num;
	cout << "enter the starting num" << endl;
	cin >> num;
	int num2;
	cout << "enter the ending num" << endl;
	cin >> num2;
	sum(num, num2);
	return 0;
}
int sum(int num, int num2)
{
	int sum = 0;
    for (int i = num;i <= num2;i++)
	{
		sum += i;
	}
	
	cout << sum;
	
	return 1;
}