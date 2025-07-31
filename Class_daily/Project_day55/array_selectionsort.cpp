#include <iostream>
using namespace std;

void display(int size, int arr[]) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        // Find the index of the minimum element in arr[i..size-1]
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum with element at i
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
            cout << "After swapping index " << i << " and " << minIndex << ": ";
            display(size, arr);
        }
    }
}

int main() {
    int arr[] = { 88, 10, 5, 4, 99, 3, 2, 7 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    display(size, arr);

    selectionSort(arr, size);

    cout << "Sorted array:   ";
    display(size, arr);
    return 0;
}
