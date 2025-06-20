#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string compress_string(const string& s) {
    if (s.empty()) return "";

    stringstream result;
    int count = 1;

    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1]) {
            count++;
        }
        else {
            result << s[i - 1] << count;
            count = 1;
        }
    }
    result << s[s.length() - 1] << count;

    return result.str();
}

int main() {
    cout << compress_string("aaabbbbcc") << endl;  // Output: "a3b4c2"
    cout << compress_string("abc") << endl;  // Output: "a1b1c1"
    return 0;
}
