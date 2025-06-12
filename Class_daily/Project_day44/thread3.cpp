#include <iostream>
#include <thread>

void backgroundTask(int &x) {
   // std::this_thread::sleep_for(std::chrono::seconds(30));
   
    x = 30;
}

int main() {

    int val = 20;
    std::cout << "task value=" << val << std::endl;
    std::thread t(backgroundTask, std::ref(val));
 
    t.detach(); 
    std::this_thread::sleep_for(std::chrono::seconds(5));
    std::cout << "new task value=" << val << std::endl;
    std::cout << "Main is not blocked.\n";
    
    return 0;
}