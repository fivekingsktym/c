#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// 10:29 hour, // Capitalizing the first letter of a string using pointers

int main(void) {

    char *s = get_string("S: ");

    // Check if memory allocation was successful
    if (s == NULL) {
        // If malloc fails, return 1 to indicate an error
        return 1;
    }

    // Allocate memory for the new string, including space for the null terminator
    char *t = malloc(strlen(s) + 1); // allocating memory in C language

    // Check if memory allocation was successful
    if (t == NULL) {
        // If malloc fails, return 1 to indicate an error
        return 1;
    }

    // Copy the contents of the original string `s` to the new string `t`
    // for (int i=0; i < strlen(s) + 1; i++){ bad forloop, refactor of the for loop is:-
    // n = strlen(s) is also same, or use n variable inside the for loop
    for (int i=0, n = strlen(s) + 1; i < n; i++){ 
        t[i] = s[i];
    }

    // Capitalize the first character of the new string if it is not empty
    if (strlen(t) > 0){
        t[0] = toupper(t[0]);
    }


    // Print both the original and the new string
    printf("S: %s\n", s);
    printf("t: %s\n", t);

    // Free the allocated memory to avoid memory leaks
    free(t);


    return 0;

}