#include<iostream>
using namespace std;
#define MAX 10
int main()
{
	int freq[26] = { 0, };
	bool flag = true;
	char arr[MAX] = { '\0' }, arr2[MAX] = {'\0'};
	cin >> arr;
	int count = 0;
	int i;

	for (i = 0;i < 26;i++)
		freq[i] = 0;

	if(strlen(arr)==strlen(arr2))
		freq[arr[i] - 'a']++;
	    freq[arr2[i] - 'a']--;

	for (i = 0;i < 26;i++)
	{
		if (freq[i] > 0 || freq[i] < 0)
		{
			flag = false;
			break;
		}
		else
			flag = false;
		cout << "cout its anagram" << endl;
	}

	return 0;
}