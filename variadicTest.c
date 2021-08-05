#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int maxInts(int numArgs, ...) {
    va_list args;
    va_start(args, numArgs);

    int i = 1;
    int max = va_arg (args, int);

    while (i < numArgs)
    {
        int maybe_max = va_arg (args, int);
        if (maybe_max > max){
            max = maybe_max;
        }
        i++;
    }

    return max;
}

int main() {
    printf("%d\n", maxInts(5, 3, 2, 4, 1, 34));
    printf("%d\n", maxInts(2, 12, 21));
    return 0;
}