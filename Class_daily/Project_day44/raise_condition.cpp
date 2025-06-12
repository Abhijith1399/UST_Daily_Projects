#include <iostream>
#include <thread>
#include<mutex>
std::mutex m;

void Add(int &x)
{	
	m.lock();
	x += 10;
	std::cout << "amnt Add:" << x <<std:: endl;
	m.unlock();
}
void sub(int& x)
{
	std::this_thread::sleep_for(std::chrono::microseconds(70));
	m.lock();
	x -= 10;
	std::cout << "amnt sub:" << x << std::endl;
	m.unlock();
}

int main()
{
	int val = 40;
	std::thread t1(Add, std::ref(val));
	std::thread t2(sub, std::ref(val));
	t2.join();
	t1.join();

	return 0;
}