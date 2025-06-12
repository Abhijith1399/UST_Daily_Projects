/*Print "ABC" Using Three Threads
Problem Statement:
Create three threads to print "A", "B", and "C" respectively in strict sequence.
The final output should be:
ABCABCABC... repeated 5 times.*/

#include <iostream>
#include <thread>
#include <mutex>
#include <string>

std::mutex mtx;
void printABC()
{
	static int  count = 0;
	for (int i = 0;i < 5;i++)
	{
		mtx.lock();
		if (count%3== 0)
		{
			std::cout << "A";
			count++;
		}
		else if (count %3==1)
		{
			std::cout << "B";
			count++;
		}

		else if(count%3==2)
		{
		
			std::cout << "C";
			count++;

		}
		mtx.unlock();
	}
	

}
int main()
{
	std::thread t1(printABC);
	std::thread t2(printABC);
	std::thread t3(printABC);
	t1.join();
	t2.join();
	t3.join();

	return 0;
}
