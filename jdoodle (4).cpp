#include <iostream>

void naive_multiply(const double* A, const double* B, double* C, int n) {
    for (int i = 0; i < n; ++i) {
        for (int k = 0; k < n; ++k) {
            double tmp = A[i*n + k];
            for (int j = 0; j < n; ++j) {
                C[i*n + j] += tmp * B[k*n + j];
            }
        }
    }
}

int main() {
    const int n = 3;  // Example size
    double A[n*n] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    double B[n*n] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    double C[n*n] = {0};  // Initialize result matrix to zeros

    naive_multiply(A, B, C, n);

    // Print result
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << C[i*n + j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
