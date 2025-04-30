#include<iostream> 
using namespace std;
int main()
{
	int hour;
	cout << "enter the hour" << endl;
	cin >> hour;
	
	for ( int i = 1;i <= 59;i++)
	{
		if (hour % i == 0) {
			cout << i << endl;
	 }
    }



}