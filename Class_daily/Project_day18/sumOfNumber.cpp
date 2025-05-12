#include<iostream>
using namespace std;
#define MAX 10
int main()
{
	char str[MAX];
	cin.getline(str, MAX);
	int sum = 0;
	for (int i = 0;i < strlen(str);i++)
	{
		if ((str[i] >= 48) && ((str[i]) >=59))
		{
			sum += str[i] - 48;
			cout << sum << endl;
		}
	}
	return 0;
}