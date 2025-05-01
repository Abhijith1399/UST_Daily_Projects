#include<iostream>
using namespace std;
int countZero(int);

int main()
{
	int num;
	cout << "enter the number" << endl;
	cin >> num;
	cout <<countZero(num);
	return 0;
}
int countZero(int num )
{
	int var;
	
	if (num ==0)
	{
		return 0;
	}
	else {
	;
		var = num % 10;
		if (var == 0)		

	return 1+countZero(num /10); 
			
		else
			return countZero(num / 10);
	}

}
