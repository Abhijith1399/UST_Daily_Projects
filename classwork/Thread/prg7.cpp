#include<iostream>
#include<thread>
#include<mutex>

 std::mutex mtx;

 void display(int n, int tp)
 {
	 for ( static int i = 1;i < n;)
	 {
		 mtx.lock();
		 if (i == n + 1)
			 break;
		 if (i % 3 == 0&&tp==1 &&i%5!=0)
		 {
			 std::cout << "fizz" << std::endl;
			 i++;
		 }
		  if (i % 5 == 0&&tp==2 &&i%3!=0)
		 {
			 std::cout << "buzzz" << std::endl;
			 i++;
		 }

		   if (i % 5 == 0&&i%3==0&&tp==3)
		 {
			 std::cout << "fizzbuzz" << std::endl;
			 i++;
		 }
		   if (i % 5 != 0 && i % 3 != 0 && tp == 4)
		   {
			   std::cout << i << std::endl;
			   i++;
		   }
		 mtx.unlock();
	}

 }
 int main()
 {
	 std::thread t1(display, 20,1);
	std::thread t2(display, 20,2);
	 std::thread t3(display, 20,3);
	 std::thread t4(display, 20,4);
	 t1.join();
	 t2.join();
	 t3.join();
	 t4.join();
	 return 0;
 }
