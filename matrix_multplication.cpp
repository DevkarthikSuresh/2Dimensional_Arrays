//Name:Devkarthik Suresh
//PRN:23070123045
//Aim: Using 2D arrays for matrix multiplicatiion
#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    // Input sizes of matrices
    cout << "Enter the number of rows of the first matrix: ";
    cin >> r1;
    cout << "Enter the number of columns of the first matrix: ";
    cin >> c1;

    cout << "Enter the number of rows of the second matrix: ";
    cin >> r2;
    cout << "Enter the number of columns of the second matrix: ";
    cin >> c2;

    // Check if matrix multiplication is possible
    if (c1 != r2) {
        cout << "Matrix multiplication is not possible. Number of columns in the first matrix must equal the number of rows in the second matrix." << endl;
        return 1;
    }

    // Declare matrices
    int A[r1][c1], B[r2][c2], C[r1][c1] = {0};

    // Input elements for the first matrix
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < c2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    // Multiply matrices
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            for (int k = 0; k < c1; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display the result
    cout << "The resultant matrix is:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
/* Output-

A matrix: 
1 2 
4 5 
B matrix: 
7 8 
9 10 
Result matrix C:
58 64 
139 154 
*/
