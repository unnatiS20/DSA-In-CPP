#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Enter the size of the matrix: ";
    std::cin >> n;

    // Create a 2D matrix of size n x n
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n, 0));

    // Fill the matrix with values and perform some operations
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = i * j; // Example operation: fill with product of indices
        }
    }

    // Print the matrix
    std::cout << "Matrix:" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}