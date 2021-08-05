#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringReverse(char* str){
    int length = strlen(str);
    char* temp = (char*)malloc(length*sizeof(char));
    for (int i = length - 1; i >= 0; i--){
        temp[length-1-i] = str[i];
    }
    memcpy(str, temp, length * sizeof(char));
    free(temp);
    return;
}

void charArrReverse(char *arr, int len){
    char* temp = (char*)malloc(len*sizeof(char));
    for (int i = len - 1; i >= 0; i--){
        temp[len-1-i] = arr[i];
    }
    memcpy(arr, temp, len * sizeof(char));
    free(temp);
    return;
}

int main(){

    char myString[] = "pretty";

    for (int i = 0; i < 6; i++){
        printf("%c", myString[i]);
    }

    printf("\n");

    char myArr[6] = {'p', 'r', 'e', 't', 't', 'y'};

    for (int i = 0; i < 6; i++){
        printf("%c", myArr[i]);
    }
    
    printf("\n");

    stringReverse(myString);
    for (int i = 0; i < 6; i++){
        printf("%c", myString[i]);
    }

    printf("\n");

    charArrReverse(myArr, 6);
    for (int i = 0; i < 6; i++){
        printf("%c", myArr[i]);
    }

    printf("\n");
    return (0);
}
