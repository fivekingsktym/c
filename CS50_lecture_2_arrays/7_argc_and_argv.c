#include <cs50.h>
#include <stdio.h>

// 6:55 hour

int main(int argc, string argv[]){

    if (argc != 2)
    {
        printf("Argument is missing, please add(Like: ./7_argc_and_argv hello)\n");
        return 0;
    }
    else
    {

        printf("length : %i\n", argc);
        printf("arguments : %s | %s\n", argv[0] , argv[1]);
        return 1;
    }

    // the main return 0; as default value.
    // you can print the return value using after execution of program: using the command "$?", it called as "exit status"
}