#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Linear Search

int main(void) {
    
    string strings[] = {"moncy", "gokul", "abhi", "jithu", "sumon", "basil"};
    string n = get_string("Enter your string : ");

    for (int i=0; i<6; i++){
        if (strcmp(strings[i], n) == 0){
            printf("Found at index %i\n", i);
            return 0; // echo $? 
        }

    }

    printf("Not Found\n");
    return 1; // echo $?

}
