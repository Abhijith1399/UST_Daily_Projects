#include <iostream>
#include <list>
#include <string>
using namespace std;


void insert(list<string>&ls)
{

	ls.push_front("hello");cout << endl;
    ls.push_back("people");cout << endl;
	
	auto it = ls.begin();
	std::advance(it, 1);      
	ls.insert(it, "Beautiful");

	auto it2 = ls.begin();
	std::advance(it2, 2);
	ls.insert(it2, "world");


}

void display(list<string>& ls)
{
	for (const auto& line : ls) {
		cout << line << endl;
	}
}
int main()
{
	list<string>ls;
	insert(ls);
	display(ls);
}