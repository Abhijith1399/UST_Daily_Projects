#include<iostream>
using namespace std;
#define max 100
int main()
{
	char str[max];
	cin.getline(str, max-1);
	int count = 0;
	while (str[count] != '\0')
	count++;

	int j = 0;
	int i;
	char str1[max];

	for (i = count-1 ;i >= 0;i--)
	{
		str1[j] = str[i];
		j++;

	}
	str1[j] = '\0';
	bool flag = false;
	for (i = 0;i < count;i++)
	{
		
		
		if (str1[i] != str[i])
		{

			flag = true;
			break;

		}

		
	}
	cout << flag;

	if (flag ==false)
	{
		cout << "palindrom";
	}
	else
	{
		cout << "not";
	}


	/*
	if (strcmp(str, str1) == 0) {
		cout << "Palindrome";
	}
	else {
		cout << "Not palindrome.";
	}
	*/
	return 0;
}