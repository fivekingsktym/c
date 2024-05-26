#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {

    string name = get_string("What is you name? : ");

    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }
    printf("Length using while loop: %i\n", n);

    int len = strlen(name);
    printf("Length using strlen function : %i\n", len);


}