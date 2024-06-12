// #include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
// #include <ctype.h>
// #include <string.h>

// 10:52 hour, // garbage value pointer

int main(void) {

    int *x;
    int *y;

    x = malloc(sizeof(int));

    *x = 42;

    y = x;

    *y = 13;
    
    // x at first 42, and next x assign to y, so now both x and y are holding the same address,
    // then the y is now re-assign withe a new value, that will make a change the both pointer variable,
    //  now x and y are 13, previous x and y are 42
    printf("%i\n", *x);
    printf("%i\n", *y);
    


}