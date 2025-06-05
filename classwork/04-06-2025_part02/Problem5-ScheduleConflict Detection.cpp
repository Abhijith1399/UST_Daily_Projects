#include <iostream>
#include <set>
#include <string>
using namespace std;

void insert(set< int>& myset)
{
    myset.insert(10);
    myset.insert(11);
   
}
void booked(set< int>& myset)
{
    int s;
    cin >> s;

    if (myset.find(s) != myset.end()) {
        std::cout <<s<< " is already registered.\n";
    }
}

void display(set< int>&myset)
{
    
        for (const auto& line : myset) {
            cout << line << endl;
        }
}
int main()
{
    int t;
    set< int>myset;

    insert(myset);
    display(myset);
    booked(myset);
    cout << "free" << endl;
    cin >> t;
    myset.insert(t);
    cout << "booked: " << t << endl;
    
}