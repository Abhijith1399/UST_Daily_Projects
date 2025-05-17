#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int* ptr = (int*)malloc(sizeof(int) * 3);
	int* temp = ptr;
	cin >> *ptr;
	ptr++;
	cin >> *ptr;
	ptr++;
	cin >> *ptr;
	ptr++;
	ptr = temp;

	for (int i = 0;i < 3;i++)
	{
		cout << *ptr++<<endl;

	}
	ptr = temp;
	free(ptr);
	// valgrid tool identify the memmory lead
	cout << endl;
	return 0;

}