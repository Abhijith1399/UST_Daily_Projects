#include<iostream>
#include <thread>
typedef unsigned long long int ULL;

void printX(ULL x)
{
	for (int i = 0;i < x;i++)
		std::cout << "i:" << i << std::endl;
}

void printy(int a,int b)
{
	
	for (int i = 0;i < a;i++)
		std::cout << "t:" << i << std::endl;
}
int main()
{
	std::thread t1(printX, 99999999999999999);
	std::thread t2(printX, 9999999);
	ULL a = 10;
	ULL b = 9999;
	std::thread t3(printy, a,b);
	//t1.join();
	//t2.join();
	t3.join();

}