/*6. Odd-Even Alternating Print Using Threads
Problem Statement:
Create two threads, one to print odd numbers and one to print even numbers from 1 to 20 in order:
1 2 3 4 ... 20
*/

#include<iostream>
#include<thread>
#include<mutex>

std::mutex mtx;
void odd(bool p)
{
	
	static bool pp = false;
	for (int i = 0;i <= 20;i++)
	{
		mtx.lock();
		if (i % 2 == 1&&pp==true)
		{

			
			std::cout<<"odd:" << i << std::endl;
			i++;
			pp = false;
		}

			else if (i % 2 == 0 && pp == false)
			{
				std::cout << "even:" << i << std::endl;
				pp = true;
				i++;
			
			}
		mtx.unlock();
	}
}
/**void even(bool pp)
{
	for (int i = 0;i <= 20;i++)
	{
		std::lock_guard<std::mutex> lock(mtx);

		if (i % 2 == 0&&pp==false)
		{
			std::cout <<"even:" << i << std::endl;
		}
	
	}
}*/
int main()
{
	std::thread t1(odd ,true);
	std::thread t2(odd,false);
	t1.join();
	t2.join();
	return 0;
}

