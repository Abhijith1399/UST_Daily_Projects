#include<iostream>
#define max 200
using namespace std;
int main()
{     

	int i;
	int j = 0;
	char ch[max];
	cin.getline(ch, max);
	char temp[max];
	for (i = 0;i<max&&ch[i] != '\0'; i++)
	{
		
			if (((ch[i] >= 65) && (ch[i] <= 90)) || ((ch[i] >= 97) && (ch[i] <= 122)))
			{
				temp[j++] = ch[i];

			}
	}
	temp[j] = '\0';
	cout << temp;
	return 0;
}