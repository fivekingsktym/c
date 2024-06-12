#include <cs50.h>
#include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
#include <string.h>

// 11:21 hour, csv file writer

int main(void){
    FILE *file = fopen("3.0_phonebook.csv", "a");

    string name = get_string("Name: ");
    string number = get_string("Number: ");

    fprintf(file, "%s,%s\n", name, number);

    fclose(file);
}