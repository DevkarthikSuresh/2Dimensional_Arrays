//Name:Devkarthik Suresh
//PRN:23070123045
//Aim: Using 2D arrays for matrix multiplicatiion
#include <iostream>

using namespace std;

int main() {
  
    const int r1 = 2, c1 = 3; 
    const int r2 = 3, c2 = 2; 

   
    int A[r1][c1] = { {1, 2, 3}, {4, 5, 6} };
    int B[r2][c2] = { {7, 8}, {9, 10}, {11, 12} };
    int C[r1][c2] = {0}; 

    
    if (c1 == r2) {

       cout << "A matrix: "<< endl;
       for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            C[i][j] = 0; 
           
                cout << A[i][j] << " ";
            }
         cout << endl;
        }
      
      cout << "B matrix: "<< endl;
      for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            C[i][j] = 0; 
           
                cout << B[i][j] << " ";
            }
         cout << endl;
        }

       for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            C[i][j] = 0; 
            for (int k = 0; k < c1; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Result matrix C:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
       
        
    }
else { cout << "Multiplication is not possible. The number of columns of A must be equal to the number of rows of B." ;}
    
   

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
