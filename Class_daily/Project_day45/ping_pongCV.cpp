#include<iostream>
#include<mutex>
#include<thread>
#include<condition_variable>

std::mutex m;
bool ispinng = false;
 std::condition_variable cv;
