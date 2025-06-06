#include<iostream>
#include <set>
#include<algorithm>
using namespace std;

void Add(multiset<int> &scores)
{
    scores.insert(70);
    scores.insert(85);
    scores.insert(70); 
    scores.insert(90);
}
void count(multiset<int>& scores)
{
  cout << "Count" << scores.count(70) << "\n";
}

void remove(multiset<int>& scores)
{
   
    scores.erase(70);
    for (int x : scores)
        std::cout << x << " " << endl;;
}
void display(multiset<int>& scores)
{

    for (const auto& line : scores) {
        cout << line << endl;
    }
}
void top(multiset<int>& scores)
{
    cout << "Top=";
    int count = 0;
    for (auto i = scores.rbegin();i != scores.rend() && count < 3;i++, count++)
    {
        cout  << *i;
    }
    cout << endl;
}

int main()
{
    multiset<int> scores;
    Add(scores);
    count(scores);
    top(scores);
    remove(scores);
    display(scores);
}