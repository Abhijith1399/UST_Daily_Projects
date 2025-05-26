#include<iostream>
using namespace std;
int main()
{
	int start;
	int end;
	cout << "enter the start:" << endl;
	cin >> start;
	cout << "enter the end:" << endl;
	cin >> end;
	for (int i = start; i <= end;i++)
	{
		if (i % 2 == 0)
		{
			cout << i<<endl;
		}
	}
	
	
		return 0;
 }