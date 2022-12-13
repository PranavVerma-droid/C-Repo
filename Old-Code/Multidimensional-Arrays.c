/* Two-Dimensional Arrays:
A 2D array is also known as a matrix (a table of rows and columns). */

#include <stdio.h> //Always in code

int main() { //Main code
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
  
    /*The first dimension represents the number of rows [2], while the second dimension represents the number of columns [3]. 
    The values are placed in row-order*/

    /*To access an element of a two-dimensional array, you must specify the index number of both the row and column.
    This statement accesses the value of the element in the first row (0) and third column (2) of the matrix array: */
    printf("%d", matrix[0][2]);  // Outputs 2 

    /*To change the value of an element, refer to the index number of the element in each of the dimensions:
    The following example will change the value of the element in the first row (0) and first column (0):*/
    matrix[0][0] = 9;
    printf("%d", matrix[0][0]);  // Now outputs 9 instead of 1 

    /*To loop through a multi-dimensional array, you need one loop for each of the array's dimensions.
    The following example outputs all elements in the matrix array: */

    int i, j;
    for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
    printf("%d\n", matrix[i][j]);
    }
    } 
} 