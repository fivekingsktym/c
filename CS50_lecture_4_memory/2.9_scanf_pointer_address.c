#include <stdio.h>

// 11:15 hour, scanf usage

int main(void){
    int x;
    printf("x: ");
    scanf("%i", &x);
    printf("x: %i\n", x); // & is the actual location of x, it will assign the value to x

    // char *s = NULL;
    char s[4];
    printf("\ns: ");
    scanf("%s", s);
    printf("s: %s\n", s);

}