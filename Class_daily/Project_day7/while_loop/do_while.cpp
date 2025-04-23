#include<iostream>
#define MAXBITES 10
using namespace std;
int main()
{
	int taste = 0;
	int plateEmpty = MAXBITES;
	do {
		cout << "have a bite of the food" << endl;
		plateEmpty--;

		cout << "how is the taste of the food(0/1)" << endl;
		cin >> taste;
	}
	while ((taste>0)&&(plateEmpty>0));
	if (plateEmpty == 0)
	{
		cout << "the plate is empty" << endl;
		cout << "fud is ausome" << endl;
	}
	if (taste == 0)
	{
		cout << "fud is not taste" << (MAXBITES - plateEmpty);
		cout << "byte of eat";
	}
	return 0;
}