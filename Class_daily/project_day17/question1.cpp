#include<iostream>
using namespace std;
int main()
{
	char ch[100];

	cout << "enter the elements" << endl;
	cin.getline(ch,100);
	int count = 0;
	while (ch[count] != '\0')
	{
		count++;
	}

	for (int i = 0;i <count;i++)
	{    
	
		
		for (int j = count;j >= 0;j--)
		{
			cout << ch[j];
		
		}
		break;
		

	}

	return 0;
}