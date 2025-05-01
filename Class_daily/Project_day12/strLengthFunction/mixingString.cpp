#include<iostream>
using namespace std;


int main()
{
	char str1[20] = { '\0' };
	cout << "enter the string largest albhabet:" << endl;
	gets_s(str1);
	int len1=strlen(str1);

	char str2[20] = { '\0' };
	cout << "enter the string smallest albhabet:" << endl;
	gets_s(str2);
	int len2=strlen(str2);

	cout << str1<< str2<< endl;;
	cout << len1 << len2<<endl;
	

	int comp = strcmp(str1, str2);
	cout << comp;
	strcat(str1, str2);



}

