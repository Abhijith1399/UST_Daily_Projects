#include<iostream>
using namespace std;
#define MAX 50
int main()
{
	
	
	char str2[MAX];

	char str1[MAX];
    cout << "enter the string" << endl;
	cin.getline(str1, 49);

	int k = 0;
	for (int i = 0;i < strlen(str1);i++)
	{

		if (!((str1[i] == 'A') || (str1[i] == 'E') || (str1[i] == 'I') || (str1[i] == 'O') || (str1[i] == 'U') ||
			(str1[i] == 'a') || (str1[i] == 'e') || (str1[i] == 'i') || (str1[i] == 'o') || (str1[i] == 'u')))
		{
			str2[k] = str1[i];
			k++;
		}
		
	}
	str2[k] = '\0';
	cout << str2;
	return 0;
}