#include<iostream>
using namespace std;
#define MAX 100
int main()
{
	char ch;
	cout << "enter the char" << endl;
	cin >> ch;
	if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U') ||
		(ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
		cout << ch << "is vouvel" << endl;
	else
		cout << ch << "is consolant" << endl;
	return 0;
}