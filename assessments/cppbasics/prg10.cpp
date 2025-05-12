#include<iostream>
using namespace std;
int main()
{    

	int i, j;
	string ch;
	cin >> ch;
	string temp = "";

	char vovels[10] = { 'a','e','i','o','u','A','E','I','O','U' };
	for (i = 0;ch[i] != '\0';i++)
	{
		bool flag = true;
		for (j = 0;j<10;j++)
		{
			if (ch[i] == vovels[j])
				flag = false;
		
		}
		if (flag!= false)
		{
			temp += ch[i];
		}
	}

	cout << temp;
	return 0;
}