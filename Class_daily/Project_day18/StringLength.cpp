#include<iostream>
using namespace std;
#define MAX 10

int main()
{
	char str[MAX];
    cout << "enter the string" << endl;
	cin >> str;
	int count = 0;
	while (str[count] != '\0');
		count++;	

 cout << count<<"string length";
return 0;
}