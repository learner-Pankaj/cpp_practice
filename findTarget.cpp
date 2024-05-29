
#include <iostream>
#include <algorithm> // For std::sort

bool binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return true;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

int main() {
    int arr[] = {34, 7, 23, 32, 5, 62};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    
    std::sort(arr, arr + size);  // Sorting the array before binary search
    
    std::cout << "Enter a number to search: ";
    std::cin >> target;

    if (binarySearch(arr, size, target)) {
        std::cout << target << " is present in the array." << std::endl;
    } else {
        std::cout << target << " is not present in the array." << std::endl;
    }

    return 0;
}
