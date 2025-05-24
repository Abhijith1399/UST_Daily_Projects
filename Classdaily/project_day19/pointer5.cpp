#include<iostream>
using namespace std;
int main()
{

	int* ptr = nullptr;
	int* temp = nullptr;
	int noofElem = 5;

	ptr == (int*)malloc(sizeof(int) * noofElem);
	temp = ptr;

	for (int i = 0;i < noofElem;i++, ptr++)
	{
		cout << "enter the" << i + 1 << "value" << endl;
		cin >> *ptr;
	}

	ptr = temp;//re assign the back the ba to the pointer
	for (int i = 0;i < noofElem;i++, ptr++)
	{
		cout  << (i + 1) << "value" <<*ptr<< endl;
	
	}

	ptr = temp;//re assign the back the ba to the pointer
	for (int i = 0;i < noofElem;i++)
	{
		cout << (i + 1) << "value" << *ptr << endl;

	}



	for (int i = 0;i < noofElem;i++)
	{
		cout << (i + 1) << "value" << ptr[i] << endl;

	}
	return 0;

}