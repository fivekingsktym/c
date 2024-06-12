// #include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
// #include <ctype.h>
// #include <string.h>

// 10:41 hour, // Capitalizing the first letter of a string using pointers

int main(void) {

    // Allocate memory for an array of 3 integers
    int *x = malloc(3 * sizeof(int));

    // Check if memory allocation was successful
    if (x == NULL) {
        // If malloc fails, return 1 to indicate an error
        return 1;
    }

    // Assign values to the allocated memory
    x[0] = 72; // Assigning 72 to the first element (fixed the indexing to avoid out-of-bounds error)
    x[1] = 73; // Assigning 73 to the second element
    x[2] = 33; // Assigning 33 to the third element

    // Free the allocated memory to avoid memory leaks
    free(x);


    // Return 0 to indicate successful execution
    return 0;

}