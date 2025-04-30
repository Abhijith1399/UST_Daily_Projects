#include<iostream> 
#include<bitset>

using namespace std;
int main()
{
	int  a;
	int b;
	string bin;
	int count = 0;
	cout << "enter the decimal" << endl;
	cin >> a;
	bin=bitset<8>(a).to_string();
	cout << "binary:" << bin<< endl;
	for (int i = 0;bin[i] != '\0';i++)
	{
		if (bin[i] == '1')
			count++;
	}
	cout << count;

	return 0;

}