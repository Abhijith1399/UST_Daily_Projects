//vowvels or consoant

#include<iostream>
using namespace std;
#define max 50
int main()
{
	char str;
	int i;
	cin >> str;
	char vowels[max] = { 'a','A','E','e','I','i','O','o','U','u' };
	bool flag = true;
	for (i = 0;i < max;i++)
	{ 
		if (str == vowels[i])
		{
			flag = false;
		}
	}
	if (flag!= false)
	{
		cout << "its consolant";
	}
	else
	{
		cout << "its vowvels ";
	}
	
	return 0;
}