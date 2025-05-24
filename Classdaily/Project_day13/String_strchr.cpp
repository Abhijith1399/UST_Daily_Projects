#include<iostream>
#include<cstring>
using namespace std;
int main()
{

	unsigned long int bar1, bar2;

	char ch = 'p';
	char line[] = "this is a cpp program class";
	cout << "base adress:" << (unsigned long int) line << endl;
	
	char* res = strchr(line, ch);
	if (res != nullptr)
		cout << "\t" << res << endl;
	else
		cout << "char not found" << endl;





	char substr[] = "is";
	char* res1 = strstr(line, substr);
		if (res1 != nullptr)
			cout << "\t" << res1 << endl;
		else
			cout << "char not found" << endl;

	return 0;
}