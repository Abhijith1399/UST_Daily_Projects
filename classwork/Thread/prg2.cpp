/*2. Print Odd and Even Numbers Using Same Function
Problem: Write a program using two threads running the same function 
to print odd and even numbers from 1 to N.
Use a flag to distinguish between threads.*/


#include<iostream>
#include<thread>

void oddtoeven(int x, bool flag)
{

	for (int i = 0;i < x;i++)
	{
		if ((flag == true) && i % 2 == 0)
		{
			std::cout << "even:" << i << std::endl;
		}

		if ((flag == false) && i % 2 == 1)
		{
			std::cout << "odd:" << i << std::endl;
		}
	}
}
	
	int main()
	{

		std::thread t1(oddtoeven, 30, false);
		t1.join();
	}