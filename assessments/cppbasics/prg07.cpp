
// string count

#include<iostream>
#include<cstring>
using namespace std;
int main()
{ 
	int i;

	string arr;
	cin >> arr;
	int count = 0;
	for (i = 0;arr[i] != '\0';i++)
	{
		count++;
		
	}
	cout << count;
	return 0;
}