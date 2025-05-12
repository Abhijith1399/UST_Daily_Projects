#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "enter the element" << endl;
	cin >> ch;
	char s1 = 'a';
	char e1 = 'a' + 25;
	char s2 = 'A';
	char e2 = 'A' + 25;
	if ((ch > s1) && (ch > e1) || (ch > s2) && (ch > e2))
	{
		cout << "its albhabet" << endl;

	}else
	cout << "its not albhabet" << endl;

	return 0;
}