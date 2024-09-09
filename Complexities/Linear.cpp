#include <iostream>
#include <vector>

// Function to compute the prefix sum of an array
std::vector<int> prefixSum(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> prefix(n);
    
    if (n == 0) return prefix; // Handle empty array case
    
    prefix[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    
    return prefix;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    std::vector<int> result = prefixSum(arr);
    
    std::cout << "Prefix Sum: ";
    for (int val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    
    return 0;
}