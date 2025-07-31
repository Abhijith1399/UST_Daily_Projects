#include <iostream>
#include <algorithm> // For binary_search and sort
#include <string>    // For string

int main() {
    std::string arr[] = { "apple", "banana", "cherry", "date", "elderberry" };
    int size = sizeof(arr) / sizeof(arr[0]);
    std::string target = "cherry";

    // Sort the array to ensure binary search works correctly
    std::sort(arr, arr + size);

    // Perform binary search
    if (std::binary_search(arr, arr + size, target)) {
        std::cout << target << " found in the array.\n";
    }
    else {
        std::cout << target << " not found in the array.\n";
    }

    return 0;
}
