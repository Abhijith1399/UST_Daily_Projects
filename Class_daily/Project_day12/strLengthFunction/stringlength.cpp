#include<iostream>
using namespace std;
int strlength(char arr[]);


int main()
{
	char str[20] = {'\0'};
	cout << "enter the string:" << endl;
	gets_s(str);
	cout << "length of string"<<strlength(str) << endl;
}
int strlength(char arr[],int CAP)
{
	//int size = 0;
	int a = sizeof(arr) / sizeof(arr[0]);
	//for (int i = 0;i < CAP;i++)
		//cout << arr[i] << endl;
return a;
}