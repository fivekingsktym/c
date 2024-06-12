// #include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
// #include <ctype.h>
// #include <string.h>

// 10:59 hour, // swap two numbers


void swap(int *a, int *b);

int main(void) {

    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    

    // int temp = x;
    // x = y;
    // y = temp;

    // swap using a swap function
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);

}


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}