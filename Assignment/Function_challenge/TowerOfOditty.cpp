#include<iostream>
using namespace std;
void oddnumber(int);

void oddnumber(int num)
{
	int dig;
	if (num== 0)
	{
		return;
	}
	else
	{
		oddnumber(num - 1);
		if (num % 2!=0)
		{
			cout << num;
			
			
		}
		
	
	}return;
}

int main()
{
	int num;
	cout << "enter the number" << endl;
	cin >> num;
	oddnumber(num);
}