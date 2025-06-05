/*
Q4. Simple Bank ATM Menu
Problem:
Create a class ATMAccount with members balance, accountHolder. Provide functions deposit(), withdraw(),
and checkBalance() which modify and show balance. Simulate interaction in main().
*/


#include<iostream>
#include"simpleATM.h"
#include<string>
using namespace std;



void simple::setacntNum(int an)
{
	acntNum = an;
}
int simple::getacntNum()
{
	return acntNum;
}
void simple::setacntbal(int ab)
{
	acntbal = ab;
}
int simple::getacntbal()
{
	return acntbal;
}


int simple::deposit()
{

	int damt;

	cout << "enter the account number" << endl;
	cin >> anum;
	for (int i = 0;i < 1;i++)
	{
		if (anum == acntNum)
		{
			cout << "enter the amount deposit" << endl;
			cin >> damt;
			acntbal += damt;
			cout << "balance=" << acntbal;
			break;
		}
		else
			cout << "enter correct  acnt num" << endl;
	}
	
	
	
	return acntbal;


}
int simple::withdraw()
{
	int wamnt;
	int anum;
	cout << "enter the account number" << endl;
	cin >> anum;
	for(int i=0;i<1;i++)
	{ 
		
		if (anum == acntNum)
		{
			cout << "enter the amount witdraw" << endl;
			cin >> wamnt;
			if (acntbal >= 100)
			{
				acntbal -= wamnt;
				cout << "balance=" << acntbal;
				
				break;
			}
			else
				cout << "cannot withdreaw" << endl;
		}
		return acntbal;
	}

}

void simple::balance()
{
	int anum;
	cout << "enter the account number" << endl;
	cin >> anum;
	for (int i = 0;i < 1;i++)
	{
		if (anum == acntNum)
		{
			cout << acntbal;
		}
	}
}

int simple::menu()
{
	int option;
	cout << "+++++++++++MENU+++++++++" << endl;
	cout << "1.DEPOSIT" << endl;
	cout << "2.WITHDRAW" << endl;
	cout << "3.BALANCE" << endl;
	
	cin >> option;
	
	while(true)
		switch (option)
		{
		case 1:
			for(int i=0;i<1;i++)
			{ 
				deposit();cout << endl;
				menu();
				
			}
			
			break;
		case 2:
			for (int i = 0;i < 1;i++)
			{
				withdraw(); cout << endl;
				menu();
				
			}
			break;
		case 3:
			for (int i = 0;i < 1;i++)
			{
				balance();	cout << endl;
				menu();
				
			}
			break;
		}
	return 0;
}