#include<iostream>
#include<cstring>
#define max 100
using namespace std;
int main()
{    

	char str[max];
	cin.getline(str ,max);

	char ch[max];
	cin.getline(ch, max);

	int i;
	int j;
	bool flag;

	for (i = 0;i < strlen(ch);i++)
	{

		flag = false;
		for (j = 0;j < strlen(str);j++)
		{

			if (ch[i] == str[j])
			{
				flag = true;
				
			}
		}
	}
		if (flag == false)
		{
			cout << "anagram";
		}
		else {
		}	cout << "not";

		
	
	return 0;


}