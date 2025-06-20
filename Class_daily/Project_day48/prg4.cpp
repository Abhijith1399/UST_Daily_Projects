#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, 1);

    // Compute left products
    int left = 1;
    for (int i = 0; i < n; i++) {
        result[i] = left;
        left *= nums[i];
    }

    // Compute right products
    int right = 1;
    for (int i = n - 1; i >= 0; i--) {
        result[i] *= right;
        right *= nums[i];
    }

    return result;
}

int main() {
    vector<int> arr = { 1, 2, 3, 4 };
    vector<int> result = productExceptSelf(arr);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl; // Output: 24 12 8 6
    return 0;
}
