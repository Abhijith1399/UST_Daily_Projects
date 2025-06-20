#include <iostream>
#include <vector>
using namespace std;

vector<int> cyclicSort(vector<int>& nums) {
    int i = 0;
    while (i < nums.size()) {
        int correct_index = nums[i] - 1;
        if (nums[i] != nums[correct_index]) {
            swap(nums[i], nums[correct_index]);
        }
        else {
            i++;
        }
    }
    return nums;
}

int main() {
    vector<int> arr = { 3, 1, 5, 4, 2 };
    vector<int> sortedArr = cyclicSort(arr);
    for (int num : sortedArr) {
        cout << num << " ";
    }
    cout << endl; // Output: 1 2 3 4 5
    return 0;
}
