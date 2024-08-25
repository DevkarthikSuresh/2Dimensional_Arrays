//Name:Devkarthik Suresh
//PRN:23070123045
//Aim: Using 2D arrays to add diagonal of a matrix.
#include <iostream>
using namespace std;

int main() {  int i, j, r= 3, c = 3;
    int a[r][c] = {{1,2,3},{5,7,4},{5,9,1}}, sum=0; 

    if(r == c){

    cout << "Given matrix is:"
    for(i = 0;i<r;i++){
       for(j = 0;j<c;j++) {
         cout << a[i][j] << " ";
       }
        cout << endl;
    }
    for(i = 0;i<r;i++){
       for(j = 0;j<c;j++) {
          if(i == j){
              sum += a[i][j];
          }
       }
    }
    cout << "The sum of diagonals is : " << sum;
}
else
{cout << "Input should be square matrix";}
    return 0;
}
/*
Output
1 2 3 
5 7 4 
5 9 1 
The sum of diagonals is : 9
*/
