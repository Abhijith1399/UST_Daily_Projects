#include<iostream>
using namespace std;
int main()
{
	int num;
	int count = 0;
	int sum = 0;
	int i;
	cout << "enter the num;" << endl;
	cin >> num;
	for (int i = 1;i < num;i++)
	{
		for (int j = 1;j < num;j++)
		{
	
			if ((i % 2 == 0,i++) && (j % 2 == 0,j++))
			{
				count++;
				
			}
			if (count == 2) {
				cout << "its prime" << endl;
			
			}
			else if(count!=2)
			
				cout << "not prime" << endl;
				break;
		}

	}

	

	return 0;
}