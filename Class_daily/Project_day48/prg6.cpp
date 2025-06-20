#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeAlternating(vector<int>& nums) {
    for (int i = 1; i < nums.size(); i += 2) {
        if (i > 0 && nums[i] < nums[i - 1]) {
            swap(nums[i], nums[i - 1]);
        }
        if (i < nums.size() - 1 && nums[i] < nums[i + 1]) {
            swap(nums[i], nums[i + 1]);
        }
    }
    return nums;
}

int main() {
    vector<int> arr = { 1, 3, 2, 2, 5 };
    vector<int> result = rearrangeAlternating(arr);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl; // Output: [1, 3, 2, 5, 2] or similar pattern
    return 0;
}
