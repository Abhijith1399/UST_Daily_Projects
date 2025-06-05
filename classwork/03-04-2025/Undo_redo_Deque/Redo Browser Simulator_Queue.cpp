#include<iostream>
#include <iostream>
#include <deque>
#include <string>

int main() {
    std::deque<std::string> history;

   
    history.push_back("google.com");
    history.push_back("github.com");
    history.push_back("stackoverflow.com");


    history.pop_back();
    std::cout << "Back to: " << history.back() << "\n";
    history.pop_back();
    std::cout << "Back to: " << history.back() << "\n";


    history.push_front("github.com");
    std::cout << "forward to: " << history.front() << "\n";
    std::cout << "Current Page: " << history.back() << "\n";
    history.push_back("visit openAi");
    std::cout << "Visited new: " << history.back() << "\n";


    history.push_front("github.com");
    std::cout << "forward to: " << history.front() << "\n";
    history.pop_back();
    std::cout << "Back to: " << history.back() << "\n";
    std::cout << "Current Page: " << history.back() << "\n";



    std::cout << "\nBrowsing History:\n";
    for (const auto& site : history)
        std::cout << "- " << site << "\n";

    return 0;
}