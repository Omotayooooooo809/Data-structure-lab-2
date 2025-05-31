#include <cstddef>
#include <iostream>

void matrix_multiply(const double* A, const double* B, double* C, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i*n + j] = 0;
            for (int k = 0; k < n; k++) {
                C[i*n + j] += A[i*n + k] * B[k*n + j];
            }
        }
    }
}

int main() {
    // Example usage of matrix_multiply
    const int n = 2;
    double A[] = {1, 2, 3, 4};
    double B[] = {5, 6, 7, 8};
    double C[n*n];

    matrix_multiply(A, B, C, n);

    // Print the result
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << C[i*n + j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
