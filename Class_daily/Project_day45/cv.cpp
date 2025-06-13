#include<iostream>
#include<mutex>
#include<condition_variable>

std::condition_variable cv;
bool ready = false;
std::mutex mtx;

void worker() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return ready; });
    std::cout << "Thread processing...\n";
}

void notifier() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    {
        std::lock_guard<std::mutex> lock(mtx);
        ready = true;
    }
    cv.notify_one();
}

int main()
{
    std::thread t1(worker);
    std::thread t2(notifier);
    t1.join();
    t2.join();

    return 0;
}