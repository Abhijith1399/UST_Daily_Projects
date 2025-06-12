#include <iostream>
#include <stack>
#include <string>

class History {
private:
    std::string current;
    std::stack<std::string> front;
    std::stack<std::string> previous;

public:
    History() : current("") {}

    void currentPage(const std::string& page) {
        if (!current.empty()) {
            front.push(current);
        }
        current = page;
        std::cout << "Current site: " << current << "\n";
    }

    void back() {
        if (!front.empty()) {
            previous.push(current);
            current = front.top();
            front.pop();
            std::cout << "Back: " << current << "\n";
        }
      
    }

    void forward() {
        if (!previous.empty()) {
            front.push(current);
            current = previous.top();
            previous.pop();
            std::cout << "Forward: " << current << "\n";
        }
    }
};

int main() {
    History h;
    h.currentPage("google.com");
    h.currentPage("yahoo.com");
    h.back();
    h.forward();
    return 0;
}
