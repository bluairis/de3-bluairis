#include <stdio.h>
#include <stdlib.h>

#include "matrix.h"
#include <math.h>

int** matrixInit(int rows, int cols, int value){

    //creating the array
    int** myMatrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++){
        myMatrix[i] = (int*)malloc(cols * sizeof(int*));
        for (int j = 0; j < cols; j++){
            myMatrix[i][j] = value; //setting the value
            }
    }

    return myMatrix;

}

int matrixMin(int** arr, int rows, int cols){
    int min = arr[0][0];

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
              if (arr[i][j] < min){
                min = arr[i][j];
              }
        }
    }
    return min;
}

int matrixMax(int** arr, int rows, int cols){
    int max = arr[0][0];

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
              if (arr[i][j] > max){
                max = arr[i][j];
              }
        }
    }
    return max;
}

int digitCalc(int num){
    int digits;
    if (abs(num) == 1){
        digits = 1;
    }
    else{
        digits = (ceil(log10(abs (num))));
    }
    
    if (num < 0){
        digits += 1;
    }
    return digits;
}

void matrixPrint(int **arr, int rows, int cols){
    int max = matrixMax(arr, rows, cols);
    int min = matrixMin(arr, rows, cols);
    int digits_of_max = digitCalc(max);
    int digits_of_min = digitCalc(min);
    int max_digits;

    if (digits_of_max >= digits_of_min){
        max_digits = digits_of_max;
    }
    else{
        max_digits = digits_of_min;
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            int num = arr[i][j];
            int digits_of_num = digitCalc(num);
            int spaces = max_digits - digits_of_num + 1;
            printf("%d", num);
            for (int s = 0; s < spaces; s++){
                printf(" ");
            }
        }
        printf("\n");
    }
}

void matrixDestroy(int **arr, int length1){
    for (int i = 0; i < length1; i++){
        free(arr[i]);
    }
    free (arr);

    return;
}