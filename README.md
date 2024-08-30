# 2 Dimensional Arrays
Experiment 8


## AIM
To study and implement 2 Dimensional arrays in C++

## Software Used 
VS Code

## Theory
A 2D array is a data structure that with a grid, where each element is identified by two indices: a row index and a column index.  

```cpp
int matrix[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};
```

**Features of 2D array:**  

- Structure: A 2D array is essentially an array of arrays, where each element of the outer array is another array representing a row in the matrix.
- Indexing: Elements in a 2D array are accessed using two indices.
- Contiguous Memory: In C++, a 2D array is stored in memory as a continuous block of memory.
- Operations: Various operations can be performed on 2D arrays, including addition, subtraction, and multiplication (in the case of matrices).
 <br> 

**Uses of 2D Arrays:**  

 * Used in applications including computer graphics, image processing.
 * Used  in scientific simulations, spreadsheets.
 * Used in mathematical representation of matrix.
   eg-
   
 | 1 | 2 | 3 |
|---|---|---|
| 4 | 5 | 6 |
| 7 | 8 | 9 |

## Algorithm

## 

# Input and Display a 2D Array.

1. **Start**

2. **Input:**
   - Ask user to enter the number of rows (`r`).
   - Prompt user to enter the number of columns (`c`).

3. **Initialize:**
   - Create a 2D array `arr[r][c]`.

4. **Input Elements:**
   - For each row `i` from 0 to `r-1`:
     - For each column `j` from 0 to `c-1`:
       - Ask user to enter the element at position `(i+1, j+1)`.
       - Store the entered value in `arr[i][j]`.

5. **Display Matrix:**
   - For each row `i` from 0 to `r-1`:
     - For each column `j` from 0 to `c-1`:
       - Print `arr[i][j]` followed by a space.
     - Print a newline after each row.

6. **End**


# Sum of Diagonal Elements in a Square Matrix

1. **Start**

2. **Initialize:**
   - Define `r` (number of rows) to 3.
   - Define `c` (number of columns) to 3.
   - Define a 2D array `a` with the following elements:
     ```
     1 2 3
     5 7 4
     5 9 1
     ```
   - Set `sum` to 0.

3. **Check matrix:**
   - If `r` is equal to `c` (i.e., the matrix is square):
     1. **Display Matrix:**
        - For each row `i` from 0 to `r-1`:
          - For each column `j` from 0 to `c-1`:
            - Print the element `a[i][j]` followed by a space.
          - Print a newline after each row.
  
     2. **Sum of Diagonals:**
        - For each row `i` from 0 to `r-1`:
          - For each column `j` from 0 to `c-1`:
            - If `i` is equal to `j` (i.e., the element is on the main diagonal):
              - Add `a[i][j]` to `sum`.
  
     3. **Display Result:**
        - Print "The sum of diagonals is: " followed by the value of `sum`.

   - Else if `r` is not equal to `c`:
     - Print "Input should be square matrix."

4. **End**

# Sum of Antidiagonals of a 3x3 Matrix

1. **Start**

2. **Initialize:**
   - Define a matrix `a` with the following values:
     ```
     1 2 3
     5 7 4
     5 9 1
     ```
   - Set `sum` to 0.
   - Set `r` (number of rows) to 3.

3. **Compute Sum of Antidiagonals:**
   - For each row `i` from 0 to 2:
     - For each column `j` from 0 to 2:
       - If the `i + j == r - 1` is true:
         - Add the value of `a[i][j]` to `sum`.

4. **Display Result:**
   - Print "The sum of antidiagonals is: " followed by the value of `sum`.

5. **End**

## Conclusion
We learnt about the use cases of 2 dimensional matrices in C++.
