#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is present at mid
        if (arr[mid] == target) {
            return mid;
        }

        // If target is smaller than mid, it can only be present in the left subarray
        if (arr[mid] > target) {
            return binarySearch(arr, left, mid - 1, target);
        }

        // Else the target can only be present in the right subarray
        return binarySearch(arr, mid + 1, right, target);
    }

    // Target is not present in the array
    return -1;
}

int main() {
    std::vector<int> arr = {2, 3, 4, 10, 40};
    int target = 10;
    int n = arr.size();
    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        std::cout << "Element is present at index " << result << std::endl;
    } else {
        std::cout << "Element is not present in the array" << std::endl;
    }

    return 0;
}