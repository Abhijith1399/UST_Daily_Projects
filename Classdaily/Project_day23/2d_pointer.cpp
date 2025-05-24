A#include<iostream>
using namespace std;
int main()
{
	int a[3][5] = { {1,2,3,4,5},{5,7,8,9,10},{11,21,13,14,15} };
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			cout << "adress of " << unsigned long int( & a[i][j])<<"value"<<a[i][j] << endl;
		}
	}
	int* ptr = nullptr;
  ptr =& a[0][0];

  
	cout << *ptr;
	ptr++;
	cout << *ptr;
	ptr++;
	cout << *ptr;
	ptr++;
    cout << *ptr;
	ptr++;
	cout << *ptr;
	ptr++;
	cout << *ptr;
	ptr++;
	cout << *ptr;
	ptr++;
	



	cout << endl;
	return 0;
}