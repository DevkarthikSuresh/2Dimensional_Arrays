//Name:Devkarthik Suresh
//PRN:23070123045
//Aim: Using 2D arrays to display a matrix.

#include<iostream>
using namespace std;

int main() {
    int i, j, r, c;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;
    int arr[r][c];  
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            cout << "Enter element at position (" << i+1 << ", " << j+1 << "): ";
            cin >> arr[i][j];
        }
    }
    cout << "The matrix elements are: " << endl;
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            cout << arr[i][j] << " ";
        }
        cout << endl; 
    }

    return 0;
}
/*
Enter number of rows: 2
Enter number of columns: 2
Enter element at position (1, 1): 7
Enter element at position (1, 2): 4
Enter element at position (2, 1): 98
Enter element at position (2, 2): 6
The matrix elements are: 
7 4 
98 6 
*/
