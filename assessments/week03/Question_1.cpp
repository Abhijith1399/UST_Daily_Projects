#include<iostream>
#include<cstring>
#define MAX 100
using namespace std;
int position_are(char []);
int position_i(char[]);
int main()
{
	char str1[MAX];
	int sum = 0;
	cout << "enter the string:" << endl;
	gets_s(str1);
	 sum = position_are(str1) + position_i(str1);
	 cout << "SUM: " << sum;
	return 0;
 }
int position_are(char str1[])
{
	//for are
	for (int i = 0;i < strlen(str1); i++)
	{
	
		if ((str1[i] == 'a') && (str1[i + 1] == 'r') && (str1[i + 2] == 'e'))
		{
		
			return i;
		
		}
	}
	return -1;
	//for in
}
int position_i(char str1[])
{
	for (int i = 0;i < strlen(str1);i++)
	{
		if ((str1[i] == 'i'))
		{
			return i;
		
		}
	}
	return -1;

}
