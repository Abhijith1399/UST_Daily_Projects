#include <iostream>
#include <thread>


void hello() {
    std::cout << "Hello from thread!\n";
}
void display(int x)
{
    std::cout << "X:" << x << std::endl;
}
void modify(int &x)
{
    x += 10;
    std::cout << "X:" << x << std::endl;

}

int main() {

    int ref = 10;
    std::thread t(hello);
    t.join();
    std::thread r(display,10);
    r.join();

    std::thread s(modify,std::ref(ref));
    s.join();

    std::cout << "hii";

    return 0;
}