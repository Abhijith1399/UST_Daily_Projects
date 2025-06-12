/*3. Thread-safe Counter with Mutex
Problem: Create multiple threads that increment a shared counter 1000 times each.
Use a mutex to protect the counter from race conditions.*/


#include<iostream>
#include<thread>
#include<mutex>

std::mutex mtx;
void counter()
{
	mtx.lock();
	static int count = 0;
	for (int i = 0;i < 1000;i++)
	{
		count++;
		std::cout << count << std::endl;
	}
	mtx.unlock();
}
int main()
{
	std::thread t1(counter);
	std::thread t2(counter);
	std::thread t3(counter);
	t1.join();
	t2.join();
	t3.join();
}