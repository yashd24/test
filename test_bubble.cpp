// test_bubble.cpp
#include <iostream>
#include "bubble.h"

int main() {
    int arr[] = {5, 2, 8, 12, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call your bubble sort function
    bubbleSort(arr, n);

    // Verify the sorted array
    bool sorted = true;
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted) {
        std::cout << "Test passed: Array is sorted." << std::endl;
        return 0;
    } else {
        std::cerr << "Test failed: Array is not sorted." << std::endl;
        return 1;
    }
}
