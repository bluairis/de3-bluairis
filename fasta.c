#include <stdio.h>
#include <stdlib.h>

int getSequenceLength(const char* filename){
    FILE *fp = fopen(filename, "r"); //file was opened%
    if (fp == NULL){ 
        printf("ERROR: file didn't open."); //if file didn't open...
    }
    int read = 0;
    unsigned long length = 0;
    int amountread = 0;
    char* line;
    while((read = getline (&line, &length, fp)) != -1){
        if (line[0] != ';' && line[0] != '>'){

        }
    }
    fclose(fp);
    return length/16; //dividing by 16 because a long is a 16 bit int
}