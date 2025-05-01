#include<iostream>
using namespace std;
int main()
{
	int num;
	int mul;
	bool flag = true;
	cout << "enter the number:"<<endl;
	cin >> num;
	int result = 1;

	while(num>0) 
	{
    	mul = num % 10;
		result *= mul;
	    num  /=10;
	}
	cout << result;

	
	for (int i = 2;i < result;i++)
	{
		if (result % i == 0)
		{
			flag = false;
		}
	}
	if (flag == true)
	{
		cout << "itsprime" << endl;
	}
	else
		cout << "not prime" << endl;


	return 0;

}

