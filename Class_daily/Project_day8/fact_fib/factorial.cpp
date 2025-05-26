<<<<<<< HEAD
#include<iostream>
using namespace std;
int factorial()
{
	int num;
	int fact = 1;
	cout << "enter the number" << endl;
	cin >> num;
	/*
	for ( int i = 1;i <= num;i++)
	{
		fact *= count * (count+1);
		count++;
	
	}*/
	while (num > 1) {
		fact *= num;
		num--;
	}
	cout << fact;
	return 0;
=======
#include<iostream>
using namespace std;
int factorial()
{
	int num;
	int fact = 1;
	cout << "enter the number" << endl;
	cin >> num;
	/*
	for ( int i = 1;i <= num;i++)
	{
		fact *= count * (count+1);
		count++;
	
	}*/
	while (num > 1) {
		fact *= num;
		num--;
	}
	cout << fact;
	return 0;
>>>>>>> 4c5be30b21899113c6d8d38d8efa578370de356d
}