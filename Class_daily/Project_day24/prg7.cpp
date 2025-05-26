#include<iostream>
#include<cstring>
using namespace std;
int add(int, int);
int add(int, int, int);
char* add(char*, char*);

int main()
{
	char s1[78] = "abhi";
	char s2[] = "jith";
	cout << add(10,11) << endl;
	cout << add(1, 2.1, 3.3) << endl;
	//cout << add(s1, s2) << endl;
	return 0;
}




int add(int v1, int v2)
{
	return v1 + v2;
}
int add(int v1, float v2 ,float v3)
{
	return v1 + v2 + v3;
}
char* add(char*v1, char*v2)
{
	return strcat(v1, v2);
}
