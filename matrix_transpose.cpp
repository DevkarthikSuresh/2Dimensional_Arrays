//Name:Devkarthik Suresh
//PRN:23070123045
//Aim: Using 2D arrays to print transpose of a matrix.
#include <iostream>
using namespace std;

int main() {
    int a[3][3] = {{2,3,4},{4,5,6},{5,6,7}};
    int b[3][3];


  cout << "The original matrix is:"<<endl;
    for(int i = 0;i<3;i++){
    for(int j = 0;j<3;j++){
        cout << a[i][j]<< " ";
    }
    cout << endl;
}
cout << endl;
 cout << "The tranpose of matrix is: "<<endl;
for(int i = 0;i<3;i++){
    for(int j = 0;j<3;j++){
        b[i][j] = a[j][i];
        cout << b[i][j] << " ";
    }
    cout << endl;
}

    return 0;
}
/*
Output
The original matrix is:
2 3 4 
4 5 6 
5 6 7 

The tranpose of matrix is: 
2 4 5 
3 5 6 
4 6 7  
*/
