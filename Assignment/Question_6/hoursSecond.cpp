#include<iostream>
using namespace std;
int main() 
{
	int hour;
	int min;
	int seconds;

	cout << "enter the hour" << endl;
	cin >> hour;
	min = 60 * hour;
	seconds = min * 60;
	cout << "hour into minute:" << min << endl;

	cout << "hour into seconds" << seconds << endl;

}