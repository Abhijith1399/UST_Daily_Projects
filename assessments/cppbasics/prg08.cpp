#include<iostream>
#include<cstring>
using namespace std;

int main()
{   
	int i;
	string str;
	cin >> str;
	string str2;
	for (i = 0;str[i]!='\0';i++)
	{
		if ((str[i] > 65) && (str[i] < 90))
		{
			str2 = tolower(str[i]);
		}
		else if ((str[i] > 97) && (str[i] < 122))
			str2 = toupper(str[i]);
		cout << str2;
	}
	return 0;
}