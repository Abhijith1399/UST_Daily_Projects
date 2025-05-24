#include<iostream>
using namespace std;
#define MAX 30;
char space(char[]);

char space(char str[])
{
	char strout[30];
	int j=0;
	for (int i = 0;i < strlen(str);i++)
	{

		if (str[i] != ' ')
		{
			strout[j++] = str[i];
		}
		/**if (str[i] == ' ')
		{
			continue;
		}
		else
		{
			strout[j++] = str[i];		
		}*/
	
	}
	strout[j] = '\0';
	cout << strout;
	return 1;
	
}

int main()
{
	char str[30];
	cout << "enter the string" << endl;
	cin.getline(str, 29);
	space(str);
	return 0;
}