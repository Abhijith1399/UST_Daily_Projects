#include <iostream>
#include <forward_list>
#include<string>
using namespace std;

#define MAX_LOGS 5

void add(std::forward_list<std::string>& logs)
{
	string log;
	for(int i=0;i<MAX_LOGS;i++)
	{ 
		cin >> log;
		logs.push_front(log);
	}

}


void display(const std::forward_list<std::string>& logs) {
	int count = 0;
	for (const auto& log : logs) {
		if (count >= 3) break;
		std::cout << log << "\n";
		count++;
	}
}


int main()
{
	std::forward_list<std::string> logs;

	add(logs);
	display(logs);



}