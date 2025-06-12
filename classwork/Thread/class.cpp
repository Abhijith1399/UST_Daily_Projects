#include<iostream>
#include<thread>
#include<mutex>
#include<string>
class Counter
{
	int X;
	std::mutex mtx;
public:
		Counter():X(0){}
		void increment(const std::string name)
		{
			for (int i = 0;i < 10;i++)
			{
				std::lock_guard<std::mutex>lock(mtx);
				X += 2;
				std::cout << name << "inctrement X to:" << X << std::endl;
			}
		}
		int getx()
		{
			return X;
		}

};
int main()
{
	Counter c;
	std::thread t1(&Counter::increment, &c, "thread 1");
	std::thread t2(&Counter::increment, &c, "thread 2");
	t1.join();
	t2.join();
	return 0;
}