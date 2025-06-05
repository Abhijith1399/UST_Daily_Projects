#include <iostream>
#include <set>
#include <string>
using namespace std;



void display(set<string>& myset)
{
  
    string a;
    getline(cin, a);
    auto itr = myset.lower_bound(a);
    while (itr != myset.end() && (*itr).substr(0, a.size()) ==a)
    {
        cout << *itr << " ";
        advance(itr, 1);
    }
    
    for (const auto& line : myset) {
        cout << line << endl;
    }
}


int main() {
    set< string>myset = { "apple", "application"," banana"," apply"," ball"};

   
    display(myset);


}