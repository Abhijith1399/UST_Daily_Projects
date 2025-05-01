#include<iostream>
using namespace std;
int square(int);


int square(int num)
{
	if (num == 0)
	{
		return 0;
	}
	return num * num + square(num - 1);
	

	
}


int main()
{
	int num;
	cout << "enter the number" << endl;
	cin >> num;
   cout<<square(num);
		return 0;
}