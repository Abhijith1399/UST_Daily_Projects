#include<iostream>
using namespace std;
int main()
{    
	int count = 0;
	int sum = 0;
	float avg = 0;
	int a[5];
	cout << "enter the array" << endl;
	for (int i = 0;i < 5;i++)
		cin >> a[i];

	for (int i = 0;i < 5;i++)
	{
		if (a[i] % 10)
			count = sizeof(a) / sizeof(a[0]);
		//cout << count<<endl;
			sum +=a[i];
		//	cout << sum << endl;
			avg = sum / count;	
	}
	cout << avg;
	return 0;
}
