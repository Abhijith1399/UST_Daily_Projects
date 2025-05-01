#include<iostream>
using namespace std;
int main()
{
	int num;
	int sum = 0;
	int count = 1;
	cout << "enter the press number" << endl;
	cin >> num;
	for (int i = 1;count <= num;count++)
	{
	
		i= i * 2;
		cout << i << endl;
		sum = sum + i;
		
	}
	cout << sum;
	return 0;
}