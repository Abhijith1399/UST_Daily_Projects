#include<iostream>
using namespace std;
int main()
{
	int num;
	int sum;
	cout << "enter the num" << endl;
	cin >> num;
	while (num != 0)
	{
		sum = num / 2;
		cout << sum;
		sum += sum;
		if (sum == num)
		{
			cout << "its perfect;";
			cout << sum;
		}
		else {
			cout << "not perfect";
		}
		break;
	}
	return 0;
}