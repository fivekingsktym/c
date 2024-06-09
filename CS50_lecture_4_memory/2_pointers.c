// #include <cs50.h>
#include <stdio.h>

// 9:27 hour

int main(void) {

    int n = 50;
    int *p = &n; // p is a pointer, that holder a hexa decimal address
    // pointer *p = &n;
    printf("1 => %p\n", p);
    printf("2 => %p\n", &p);
    printf("3 => %i\n", *p);

}
