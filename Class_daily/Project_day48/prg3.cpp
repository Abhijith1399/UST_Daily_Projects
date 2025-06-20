#include <iostream>
#include <vector>
using namespace std;

int firstMissingPositive(vector<int>& nums) {
    int n = nums.size();

    // Step 1: Rearrange the numbers in the correct index.
    for (int i = 0; i < n; i++) {
        while (nums[i] >= 1 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
            swap(nums[i], nums[nums[i] - 1]);
        }
    }

    // Step 2: Find the first missing positive.
    for (int i = 0; i < n; i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }

    return n + 1;
}

int main() {
    vector<int> arr = { 3, 4, -1, 1 };  // Initialize a vector with values
    cout << "Smallest Missing Positive: " << firstMissingPositive(arr) << endl;  // Output: 2
    return 0;
}
