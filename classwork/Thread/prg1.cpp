/*1. Print Numbers Using Two Threads
Problem: Create two threads. One thread prints numbers from 1 to 10, and the other thread prints numbers from 11 to 20.
Use std::thread to demonstrate concurrent execution.*/


#include<iostream>
#include<thread>

void printUpTen()
{
	for (int i = 1;i <= 10;i++)
	{
		std::cout << i << std::endl;
}
}
void TentoTwenty()
{
	std::this_thread::sleep_for(std::chrono::seconds(0));

	for (int i = 11;i <= 20;i++)
	{
		std::cout << i << std::endl;
	}
}
int main()
{
std::thread t1(printUpTen);
std::thread t2(TentoTwenty);

t1.join();
t2.join();
}