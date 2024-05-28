#include <cs50.h>
#include <stdio.h>
#include <string.h>

// phone book :- 7:42 hour


int main(void){

    string names[] = {"Moncy", "Abhi"};
    string numbers[] = {"9876542536", "6475839272"};

    string name = get_string("Name : ");

    for (int i=0; i < 2; i++){
        if (strcmp(names[i], name) == 0){
            printf("Mobile number is: %s| at index position %i\n", numbers[i], i);
            return 0;
        }
    }

    printf("No record found\n");
    return 1;


    
}