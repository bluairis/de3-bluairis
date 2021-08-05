# de3

We will create some utility functions for the upcoming lab assignment 2.


## Matrix
Matrices are 2D-arrays. 

Complete the following functions, test with a few examples. Create a `matrix.h` and `matrix.c` for the code, and test in a `matrix_test.c` file. 
```c
/*
 * create a dynamically allocated arr (need malloc)
 * such that the rows (i.e. first index) is length rows and the second index
 * (cols) are length cols. 
 * set all values in the array to be equal to value
 */
int** matrixInit(int rows, int cols, int value);

/*
 * get the min value in the array
 */
int matrixMin(int **arr, int rows, int cols);

/*
 * get the max value in the array
 */
int matrixMax(int **arr, int rows, int cols);


/*
 * print the array to screen
 * the array has rows rows and cols cols
 * make sure to check the array for a min/max element
 * to see how many digits you need spacing 
 * (i.e. if you assume 1 space between numbers, the rows will be unequal width and it won't look good)
 */
void matrixPrint(int **arr, int rows, int cols);

/*
 * free both arr and all the memory it consumes
 * recall: for every malloc statement you want a free statement somewhere!
 */
void matrixDestroy(int **arr, int length1);

```

## Strings

Write a function which reverses a string. Write the same function which reverses a char array. Remember, always becareful. The type char* can either be a char array, for which one MUST state the length, or it could be a "string" in which the last charater is \0 which indicates the end of the string. You can write this in a single file `stringtest.c`. 
```c
void stringReverse(char* str);

void charArrReverse(char *arr, int len);
```


## Files
Write a function which opens the file ("SASRS-CoV-2sequence.fasta") and reports how many base pairs are in the first line of the file not beginning with '>' or ';'. Recall, we are using const char* instead of char* because the function ought not modify the filename... that's rather fixed---it is what it is. You should create a file `fasta.c` and `fasta.h`, placing this function in the their. Write a `fasta_test.c` file with a main to test.
```c
int getSequenceLength(const char* filename);
```

You need to use `getline`, `fopen` and `fclose` functions.


## Variadic Functions
A function is said to be variadic if it takes variable number of arguments. We will use some functions from the library `stdarg.h`.
The basic template of a variadic function is `void variadicFunc(int numArgs, ...)`. The `numArgs` parameter will be the number of parameters taken, and the ... indicates one can call this function with a variable number of arguments. For example, I could call this function like `variadicFunc(3, 1, 2, 3)` where the first number provides the number of arguments and the last three are the `...`. To access the `...` arguments, we use a set of traversal functions. 
First, we declare in the function a variable of type `va_list`, which stands for variadic argument list, such as `va_list args;`. Then, we write `va_start(args, numArgs);` which says we are going to start iterating over the argument list provided and it has length `numArgs`. 


Write a variadic function which takes the maximum of the provided list of ints. You can just create a single file `variadicTest.c` for this.
```c
int maxInts(int numArgs, ...) {
  //todo
  return 0;
}

int main() {
  printf("%d", maxInts(5, 3, 2, 4, 1, 34));
  printf("%d", maxInts(2, 12, 21));
  return 0;
}
```

