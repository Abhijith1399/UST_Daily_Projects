#include<iostream>
#include<thread>
#include<mutex>

std::mutex m1;
std::mutex m2;

void thread1()
{
	std::lock(m1, m2);
	std::lock_guard<std::mutex>lock1(m1, std::adopt_lock);
	std::lock_guard<std::mutex>lock2(m2, std::adopt_lock);
	
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	
	std::cout << "thread 1 executed" << std::endl;

}
void thread2()
{
	std::lock_guard<std::mutex>lock2(m2);
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::lock_guard<std::mutex>lock1(m1);
	std::cout << "thread 2 executed" << std::endl;

}
int main()
{
	std::thread t1(thread1);
	std::thread t2(thread2);
	t1.join();
	t2.join();
	return 0;
}