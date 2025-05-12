#include<iostream>
using namespace std;
#define MAX 20
int main()
{
	int n;
	char str1[MAX];
	cout << "enter the size" << endl;
	cin >> n;
	cout << "enter the string" << endl;
	cin >>str1;
	int count = 0;
	for(int i=0;i<n;i++)
	{
    
		if ((str1[i] == 'A') || (str1[i] == 'E') || (str1[i] == 'I') || (str1[i] == 'O') || (str1[i] == 'U') ||
			(str1[i] == 'a') || (str1[i] == 'e') || (str1[i] == 'i') || (str1[i] == 'o') || (str1[i] == 'u'))
		{
			count++;
		}	
	}
	cout << count;
	return 0;
}