#include <iostream>
#include <vector>
using namespace std;

void display(const vector<int>& vec) {
    for (int v : vec)
        cout << v << " ";
    cout << endl;
}

void insertionSort(vector<int>& vec) {
    for (int i = 1; i < vec.size(); ++i) {
        int key = vec[i];
        int j = i - 1;

        // Shift elements greater than key to the right
        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            --j;
        }
        vec[j + 1] = key;

        cout << "After inserting element at index " << i << " (" << key << "): ";
        display(vec);
    }
}

int main() {
    vector<int> vec = { 88, 10, 5, 4, 99, 3, 2, 7 };

    cout << "Original vector: ";
    display(vec);

    insertionSort(vec);

    cout << "Sorted vector:   ";
    display(vec);

    return 0;
}
