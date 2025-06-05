#include <iostream>
#include <set>
#include <string>
using namespace std;

void insert(set< int>& myset)
{
    myset.insert(101);
    myset.insert( 105);
    myset.insert(202);
    myset.insert(206);
    myset.insert(200);
  
}
void remove(set< int>& myset)
{
    myset.erase(105);
}

void minmax(set< int>& myset)
{
    int min = *myset.begin();           
    int max = *myset.rbegin();           
    cout << min  << max << '\n';
}

void display(set<int>& myset)
{
    for (const auto& line : myset) {
        cout << line << endl;
    }
}
int main() {
    set< int>myset;

    insert(myset);
    remove(myset);
    display(myset);


}