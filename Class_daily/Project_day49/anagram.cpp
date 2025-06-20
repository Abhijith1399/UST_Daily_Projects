#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int count_anagram_windows(const string& source, const string& pattern) {
    unordered_map<char, int> pattern_count;
    unordered_map<char, int> window_count;

    for (char ch : pattern) {
        pattern_count[ch]++;
    }

    int left = 0, right = 0, result = 0;

    while (right < source.length()) {
        window_count[source[right]]++;

        while (window_count == pattern_count) {
            result++;
            window_count[source[left]]--;
            if (window_count[source[left]] == 0) {
                window_count.erase(source[left]);
            }
            left++;
        }

        right++;
    }

    return result;
}

int main() {
    cout << count_anagram_windows("cbaebabacd", "abc") << endl;  // Output: 2
    cout << count_anagram_windows("aaaaa", "aa") << endl;  // Output: 4
    return 0;
}
