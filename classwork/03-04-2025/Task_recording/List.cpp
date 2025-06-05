#include<iostream>
#include<list>
#include<algorithm>
#include<string>
using namespace std;

void insert(list<string>& lst) 
{
	string task;
	
	for (int i = 0;i < 3;i++)
	{
		cout << "add ";
		cin >> task;
		lst.push_front(task);
	}
	
}
void insertpos(list<string>& lst)
{
	string task1;
	cout << "urgent ";
	cin >> task1;
	lst.insert(lst.begin(), task1);
}
void remove(list<string>& lst)
{
	string taskr;
	cout << "remove  ";
	cin >> taskr;
	lst.remove(taskr);             
	
}
void display(list<string>& lst)
{
	for(auto i:lst)
	cout <<i << "->";
	cout << endl;
}
int main()
{
	list<string> list_name;
	insert(list_name);
	display(list_name);

	insertpos(list_name);
	display(list_name);

	remove(list_name);
	display(list_name);
}