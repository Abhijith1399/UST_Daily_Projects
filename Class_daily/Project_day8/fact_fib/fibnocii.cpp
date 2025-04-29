<<<<<<< HEAD
#include<iostream>
using namespace std;
int fibnocii()
{
	int var1 = 0;
	int var2 = 1;
	int sum = 0;
	int num;
	cout << "enter the limit" << endl;
	cin >> num;

	
	for ( int i=0;i <num;i++)
	{
		
		sum = var1 + var2;
        var1 = var2;
		var2 = sum;
		cout<< sum;
		
	}

	return 0;
=======
#include<iostream>
using namespace std;
int fibnocii()
{
	int var1 = 0;
	int var2 = 1;
	int sum = 0;
	int num;
	cout << "enter the limit" << endl;
	cin >> num;

	
	for ( int i=0;i <num;i++)
	{
		
		sum = var1 + var2;
        var1 = var2;
		var2 = sum;
		cout<< sum;
		
	}

	return 0;
>>>>>>> 4c5be30b21899113c6d8d38d8efa578370de356d
}