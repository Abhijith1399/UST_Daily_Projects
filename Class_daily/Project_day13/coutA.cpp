#include<iostream>
using namespace std;
#define MAX 10
int main()
{ 
	int freq[26] = { 0, };
	char arr[MAX];
	cin >> arr;
	int count = 0;
	int i, j;

	for (i = 0;i < 26;i++)
		freq[i] = 0;

	for (i = 0;i < strlen(arr);i++)
		freq[arr[i] - 'a']++;

	for (i = 0;i < 26;i++)
	{
		if (freq[i] > 0)
		{
			cout << char(i + 'a') << freq[i];
		}
	}

	return 0;
}