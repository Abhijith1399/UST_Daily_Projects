#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] > nums[mid + 1]) {
            right = mid;
        }
        else {
            left = mid + 1;
        }
    }

    return left;  // Return the index of the peak element
}

int main() {
    // Initialize the vector explicitly instead of an initializer list
    vector<int> arr = { 1, 3, 20, 4, 1, 0 };

    // Print the index of the peak element using cout and the '<<' operator
    cout << "Peak Element Index: " << findPeakElement(arr) << endl;
    return 0;
}
