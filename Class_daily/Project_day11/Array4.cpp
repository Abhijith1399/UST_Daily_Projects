#include<iostream>

using namespace std;
int main()
{
	


	int a[] = { 1,2,3,4,5,6,7,8,9,10,11,23,45 };
	int i;
	constexpr int noElement = sizeof(a) / sizeof(a[i]);
	int opArray[noElement];
	cout << "no of element present" << noElement << endl;

	int countodd = 0;
	int counteven = 0;

	for (i = 0;i < noElement;i++)
	{
		if (a[i] % 2 != 0)
			counteven++;
		
	}



	for (i = 0;i < noElement;i++)
	{
		if (a[i] % 2 == 0)
		{
			opArray[counteven] = a[i];
			counteven++;
		}
		else
		{
			opArray[countodd] = a[i];
			countodd++;

		}
	}
	

	for (i = 0;i < noElement;i++)
	{
		cout << opArray[i];
	}
}
	


