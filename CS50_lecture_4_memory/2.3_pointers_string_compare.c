#include <cs50.h>
#include <stdio.h>
#include <string.h>

// 10:00 hour, pointer addition

int main(void) {

    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // int a = strcmp(s, t);
    // printf("%i\n", a);

    // if (*s == *t && *(s+1) == *(t+1) ......etc) the pointer way to check the string also same, but it is not applicable.
    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else{
        printf("Different\n");
    }


}


/* Terminal output

*/