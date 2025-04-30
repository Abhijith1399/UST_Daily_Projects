#include<iostream> 
using namespace std;
int main()
{
	int n;
	int min = 10;
	int temp;
	cout << "enter the number" << endl;
	cin >> n;

	while (n > 0)
	{
		temp = n % 10;

		if (temp < min)
		{
			min = temp;
		}
			n= n / 10;
					
		}
		cout << min;
	}



