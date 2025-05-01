#include<iostream>
using namespace std;
void printing(int);

void printing(int num)
{
	
	if (num > 0)
	{
		cout << num;
		printing(num / 2);


	}
	else
		return;
}


int main()
{
	int num;
	cout << "enter the number" << endl;
	cin >> num;
	printing(num);
	return 0;
}