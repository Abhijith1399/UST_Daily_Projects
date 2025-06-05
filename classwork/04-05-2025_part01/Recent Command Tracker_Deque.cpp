#include <iostream>
#include <deque>
#include <string>
using namespace std;
void insert(deque<string>&mydq)
{
	mydq.push_front("RUN ls");
    mydq.push_back("RUN mkdir test");
	mydq.push_back("RUN cd test");
	mydq.push_back("RUN touch file.txt");
	mydq.push_back("RUN cat file.txt");
	cout << "___HISTORY____" << endl;
}
void deletedq(deque<string>&mydq)
{
	mydq.pop_front();
}
void display(deque<string>& mydq)
{
	for (const auto& line : mydq) {
		cout << line << endl;
	}
}
int main()
{
	deque<string>mydq;
	insert(mydq);
	deletedq(mydq);
	display(mydq);

}
