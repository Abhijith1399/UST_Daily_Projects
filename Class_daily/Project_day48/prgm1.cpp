#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubarrayXOR(vector<int>& nums) {
    int max_xor = 0;
    int prefix_xor = 0;
    for (int num : nums) {
        prefix_xor ^= num;
        max_xor = max(max_xor, prefix_xor);
    }
    return max_xor;
}

int main() {
    vector<int> arr = { 1, 2, 3, 4 }; // Create a vector explicitly
    cout << maxSubarrayXOR(arr) << endl; // Output: 7
    return 0;
}
