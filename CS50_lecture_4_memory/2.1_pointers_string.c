#include <cs50.h>
#include <stdio.h>

// 9:41 hour

int main(void) {

    string s = "HI!";
    printf("%s\n", s);

    printf("%p\n", s); // pointer holds the "address" of the first character in the string, thats why the two address are same 
    printf("%p\n", &s[0]); // Address of the first character in the string
    printf("%p\n", &s[1]); // Address of the second character in the string
    printf("%p\n", &s[2]); // Address of the third character in the string
    printf("%p\n", &s[3]); // Address of the null terminator "0\"

}


/* Terminal output
HI!
0x55cdb9578004
0x55cdb9578004
0x55cdb9578005
0x55cdb9578006
0x55cdb9578007
*/