#include <stdio.h>
#include <stdlib.h>

#include "matrix.h"

int main(){

    //testing matrixInit and matrixPrint
    int rows, cols, value;

    rows = 5;
    cols = 3;
    value = 7;

    int** myMatrix = matrixInit(rows, cols, value);

    myMatrix[2][2] = 234;

    myMatrix[3][0] = -1;

    myMatrix[4][1] = -1202;

    matrixPrint(myMatrix, rows, cols);
    
    
    //testing matrixMin

        int min = matrixMin(myMatrix, 3, 3);
        printf("min: %d\n", min);

    //testing matrixMax

        int max = matrixMax(myMatrix, 3, 3);
        printf("max: %d\n", max);

    return 0;
}