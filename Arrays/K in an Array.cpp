#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 30; // Value to find

    // Using std::find
    auto result = std::find(arr, arr + n, k);

    if (result != arr + n) {
        std::cout << "Element " << k << " found at index: " << (result - arr) << std::endl;
    } else {
        std::cout << "Element " << k << " not found in array." << std::endl;
    }

    return 0;
}   
//This code needs to be updated.