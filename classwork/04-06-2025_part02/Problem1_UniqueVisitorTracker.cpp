#include <iostream>
#include <set>
#include <string>
using namespace std;

void insert(set< string>& myset)
{
    myset.insert("VISIT 101");
    myset.insert("VISIT 105");
    myset.insert("VISIT 101");
    myset.insert("VISIT 110");
    cout << myset.size() << "\n";
}

void display(set<string>&myset)
{
    for (const auto& line : myset) {
        cout << line << endl;
    }
}


int main() {
    set< string>myset;
 
    insert(myset);
    display(myset);
  
    
}