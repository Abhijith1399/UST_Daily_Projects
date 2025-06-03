
/*Objective: Design a scoreboard system that reads scores from users (unbounded in size) and maintains:

Top 3 highest scores.
Sorted score list (descending).
Requirements:

Use std::vector<int> for storing scores.
Continuously accept input until -1 is entered.
Sort scores in descending order.
Extract and display the top 3 scores.
Bonus: Remove duplicate scores before sorting.

Challenge Level: Intermediate → Advanced Focus Areas: Sorting, input handling, 
use of vector::erase, std::unique, and iterators.*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> scores;
int main()
{
    int score;
    int num = 5;

   
    for (int i = 0;i < num;i++)
    {
        cout << "Enter scores" << endl;
        cin >> score;
        scores.push_back(score);
    };
    for (auto i : scores)
    {
        cout << i << endl;
    }
    cout << "ascending order" << endl;
    sort(scores.begin(), scores.end(),greater<int>());
    for (auto i : scores)
    {
        cout << i << endl;
    }
    cout << "fist top three" << endl;
    for (int i = 0; i < 3; i++) {
        std::cout << scores[i] << " ";
    }
    cout << endl;
    cout << "remove duplicate" << endl;
    auto last = unique(scores.begin(), scores.end());
    scores.erase(last, scores.end());
    for (auto i : scores)
    {
        cout << i << endl;
    }

}
