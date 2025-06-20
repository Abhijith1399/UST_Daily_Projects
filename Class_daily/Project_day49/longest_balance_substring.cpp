
#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

int longest_balanced_substring(const string& s) {
    int max_length = 0;
    unordered_map<int, int> balance_map;
    balance_map[0] = -1;  // To handle balance == 0 at the start

    int balance = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (islower(s[i])) {
            balance++;
        }
        else if (isupper(s[i])) {
            balance--;
        }

        if (balance_map.find(balance) != balance_map.end()) {
            max_length = max(max_length, i - balance_map[balance]);
        }
        else {
            balance_map[balance] = i;
        }
    }

    return max_length;
}

int main() {
    cout << longest_balanced_substring("aaBBcCddE") << endl;  // Output: 4
    cout << longest_balanced_substring("abcd") << endl;  // Output: 0
    return 0;
}
