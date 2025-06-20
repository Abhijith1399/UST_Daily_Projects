#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

vector<string> custom_tokenizer(const string& s, const string& delimiters) {
    unordered_set<char> delimiter_set(delimiters.begin(), delimiters.end());
    vector<string> tokens;
    string token;

    for (char ch : s) {
        if (delimiter_set.find(ch) != delimiter_set.end()) {
            if (!token.empty()) {
                tokens.push_back(token);
                token.clear();
            }
        }
        else {
            token += ch;
        }
    }

    if (!token.empty()) {
        tokens.push_back(token);
    }

    return tokens;
}

int main() {
    vector<string> result = custom_tokenizer("abc,,def;ghi", ",;");
    for (const string& token : result) {
        cout << token << " ";
    }
    // Output: abc def ghi
    return 0;
}
