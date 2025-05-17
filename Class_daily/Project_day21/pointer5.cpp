//vovels in given string

#include<iostream>
using namespace std;
#define max 10
int vovelcount(char*);

int vovelcount(char*ptr)
{
	int count = 0;
	while (*ptr!='\0')
	{
		switch (*ptr)
		{
		case'a':
		case'A':
		case'e':
		case'E':
		case'I':
		case'i':
		case'O':
		case'o':
		case'U':
		case'u':
			count++;

		}
		ptr++;

	}
	return count;
}


int main()
{
	char arr[max];
	cin.getline(arr, 9);
	/**for (int i = 0;i < strlen(arr);i++)
	{
		cout << int(arr[i]) << " " << arr[i] << endl;
	}*/
	cout<< vovelcount(arr);
	return 0;
}