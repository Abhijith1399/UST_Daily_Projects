#include<iostream>
using namespace std;
int main()
{
	int var,rem;

	int count = 0;
	int num;
	cout << "enter the num" << endl;
	cin >> num;
	for (int i = 0;i < 10;i++)
	{
		if (num)
		{
			var = num % 10;
			count++;
			num = num / 10;
			num = var;
		    

			
		  

	    }
		
		if (num % count==0)
			cout << i << ":" << var << endl;
		else
			cout << i << ":" <<0<< endl;
	
	}
	return 0;
}