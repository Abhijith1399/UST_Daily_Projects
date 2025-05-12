#include<iostream>
using namespace std;
#define max 100
int main()
{
	char ch[max];
	cin.getline(ch, max);
	 char temp[max];
	int i=0;
	int j = 0;
	for (i = 0;i < max && ch[i] != '\0';i++)
	{
			if (ch[i] != ' ')
			{
			temp[j++] = ch[i];
			}
	}
	temp[j] = '\0';
	cout << temp;
	return 0;

}