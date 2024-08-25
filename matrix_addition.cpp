/*
Name:Devkarthik Suresh
PRN: 23070123045
Aim: To perform addition of two matrices using 2D arrays.
*/
#include<iostream>
using namespace std;

int main() {
    int i, j, r1, c1,r2,c2;
    int sum=0;
    cout << "Enter number of rows of 1st matrix : ";
    cin >> r1;
    cout << "Enter number of columns of 1st matrix: ";
    cin >> c1;
    cout << "Enter number of rows of 2nd matrix : ";
    cin >> r2;
    cout << "Enter number of columns of 2nd matrix: ";
    cin >> c2;
    cout << endl;
    cout << "For first matrix: ";
    cout << endl;

    if(r1 == r2 || c1 == c2){

       int arr1[r1][c1], arr2[r2][c2];  
    for(i = 0; i < r1; i++) 
    {
        for(j = 0; j < c1; j++) 
        {
            cout << "Enter element at position (" << i+1 << ", " << j+1 << "): ";
            cin >> arr1[i][j];
        }
    }
    cout << endl;
    cout << "The 1st matrix is : " << endl;
    for(i = 0; i < r1; i++) 
    {
        for(j = 0; j < c1; j++) 
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl; 
    }
    cout << endl;
    cout << "For second matrix: ";
    cout << endl;
    for(i = 0; i < r1; i++) 
    {
        for(j = 0; j < c1; j++) 
        {
            cout << "Enter element at position (" << i+1 << ", " << j+1 << "): ";
            cin >> arr2[i][j];
        }
    }
    cout << endl;
    cout << "The 2nd matrix is : " << endl;
    for(i = 0; i < r1; i++) 
    {
        for(j = 0; j < c1; j++) 
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl; 
    }

    cout << "The sum matrix is: : " << endl;
    for(i = 0; i < r1; i++) 
    {
        for(j = 0; j < c1; j++) 
        {
            cout << arr2[i][j] + arr1[i][j] << " ";
        }
        cout << endl; 
    }
   
}
   

    return 0;
}

/*Output-
  Enter number of rows of 1st matrix : 2
Enter number of columns of 1st matrix: 2
Enter number of rows of 2nd matrix : 3
Enter number of columns of 2nd matrix: 2

For first matrix: 
Enter element at position (1, 1): 3
Enter element at position (1, 2): 2
Enter element at position (2, 1): 3
Enter element at position (2, 2): 2

The 1st matrix is : 
3 2 
3 2 

For second matrix: 
Enter element at position (1, 1): 3
Enter element at position (1, 2): 2
Enter element at position (2, 1): 3
Enter element at position (2, 2): 2

The 2nd matrix is : 
3 2 
3 2 
The sum matrix is: : 
6 4 
6 4 
*/
    
  
