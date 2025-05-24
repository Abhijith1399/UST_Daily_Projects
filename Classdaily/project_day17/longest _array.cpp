#include<iostream>
using namespace std;
#define max 100
int main()
{

	char ch[max];
	int count = 0;
	int flg = 0;
	cout << "enter the elements" << endl;
	cin.getline(ch, max);
	while (ch[count] != '\0')
	{
		count++;
	
	}
	for (int i = 0;i < count;i++)
	{
		cout << ch[i];

		if (ch[i] == ' ')
		{
			flg++;
			cout << flg;
			cout << ch[i] << endl;
		}
	
	}
	for (int i = ch[0];i < flg;i++)
	{

	}
	return 0;
}