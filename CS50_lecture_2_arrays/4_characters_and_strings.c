#include <cs50.h>
#include <stdio.h>

int main(void) {
    char c = 'H';
    printf("Letter is : %c\n", c);
    printf("ASCII value : %i\n", c);


    string s = "Hai";
    printf("The string is : %s\n", s);
    printf("String value using s[] : %c %c %c %c\n", s[0], s[1], s[2], s[3]);
    printf("ASCII value : %i %i %i %i\n", s[0], s[1], s[2], s[3]);


    string words[2];
    words[0] = "Hai";
    words[1] = "Bye!";

    printf("\nTwo array values : %s %s\n", words[0], words[1]);
    printf("First array values using word[][] : %c %c %c\n", words[0][0], words[0][1], words[0][2]);
    printf("Second array values using word[][] : %c %c %c %c\n", words[1][0], words[1][1], words[1][2], words[1][3]);

}
