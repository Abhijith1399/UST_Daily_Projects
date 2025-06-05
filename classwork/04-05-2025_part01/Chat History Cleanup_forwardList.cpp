#include <iostream>
#include <string>
#include<forward_list>
#include<algorithm>
using namespace std;

void insert (forward_list<string>&mylist)
{
    mylist.push_front("Hi");
    mylist.push_front("DELETED: Spam");
    mylist.push_front("How are you?");
    mylist.push_front("DELETED: Abuse");
}
void deletemes(forward_list<string>&mylist)
{
    auto j = mylist.end();
    for (auto i = mylist.begin();i != mylist.end();advance(i, 1))
    {
        if ((*i).find("DELETED:") != string::npos)
        {
            mylist.erase_after(j);
            i= j;
            continue;
        }
        j = i;
    }
}
void display(forward_list<string>mylist)
{
    for (const auto& line : mylist) {
        cout << line << endl;
    }
}
int main() {

    forward_list<string>mylist;
    insert(mylist);
    deletemes(mylist);
    display(mylist);
    
}