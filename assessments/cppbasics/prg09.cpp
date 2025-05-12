#include<iostream>
using namespace std;
#define max 100
int main()
{    

	int i, j;
	string ch;
	cin>>ch;
	int count = 0;
	
	char vovels[10] = { 'a','e','i','o','u','A','E','I','O','U' };
	

	for(i=0;ch[i]!='\0';i++)
	{ 
		for (j = 0;j<10;j++)
		{
			if (ch[i] == vovels[j])
			{
				count++;

			}
		}
	}
	cout << count;

	return 0;
}