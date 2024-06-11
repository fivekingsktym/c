#include <cs50.h>
#include <stdio.h>

// 10:00 hour, pointer addition

int main(void) {

    char *s = "HI!";

    printf("%c\n", *s); // Address of the first character in the string
    printf("%c\n", *(s+1)); // Address of the second character in the string
    printf("%c\n", *(s+2)); // Address of the third character in the string
    printf("%c\n", *(s+3)); // Address of the null terminator "0\"

    // printf("%c\n", *(s+500000)); // Segmentation fault
}


/* Terminal output
H
I
!
*/