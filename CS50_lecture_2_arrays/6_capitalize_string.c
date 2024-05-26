#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// program to capitalize a string
int main(void) {

    string s = get_string("Enter your name is small letter : ");
    printf("\nUsing manuel forloop math condition:\n");
    printf("Input : %s\n", s);


    // case-1
    // manuel to calculate and convert the letters into capital letters
    for (int i = 0; i < strlen(s); i++){

        // consider the input: abhi
        
        // a >= a and a <= z  -> True
        // 97 >= 97 and 97 <= 122 -> True
        // output: a - 32 or 97 - 32 : answer is: A or 65

        // b >= a and b <= z  -> True
        // 98 >= 97 and 98 <= 122 -> True
        // output: b - 32 or 98 - 32 : answer is: B or 66

        // h >= a and h <= z  -> True
        // 104 >= 97 and 104 <= 122 -> True
        // output: h - 32 or 104 - 32 : answer is: H or 72

        // i >= a and i <= z  -> True
        // 105 >= 97 and 105 <= 122 -> True
        // output: i - 32 or 105 - 32 : answer is: I or 73

        if (s[i] >= 'a' && s[i] <= 'z'){
            printf(" %c ", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");

    // case-2
    // ctype library to calculate and convert the letters into capital letters
    printf("\nUing ctype library:");
    printf("\nInput: %s\n", s);
    for (int i = 0; i < strlen(s); i++){

        // consider the input: abhi
        // if (islower(s[i])){
        //     printf(" %c ", toupper(s[i]));
        // }
        // else
        // {
        //     printf("%c", s[i]);
        // }

        printf(" %c ", toupper(s[i]));

    }
    printf("\n");


}