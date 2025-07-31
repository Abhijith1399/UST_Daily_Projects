#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;

    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            // No swaps = array is already sorted ? early exit
            break;
        }
    }
}

void printVector(const vector<int>& arr) {
    for (int num : arr) cout << num << " ";
    cout << "\n";
}

int main() {
    vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
    cout << "Before sorting: ";
    printVector(arr);

    bubbleSort(arr);

    cout << "After sorting:  ";
    printVector(arr);
    return 0;
}
