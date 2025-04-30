#include<iostream> 
#include <string.h>
using namespace std;
int main()
{
	string num;
	cout << "enter the number" << endl;
	cin >> num;
	for (int i = 0;num[i]!='\0';i++)
	{
		if (num[i] != '0')
		{
			if (int(num[i])% 2 == 0)
			{
				cout << "Even" << endl;
				break;
			}
			cout << "odd" << endl;
			break;
		}
		
		
	}

}