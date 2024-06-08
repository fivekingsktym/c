#include <cs50.h>
#include <stdio.h>
#include <string.h>

// phone book :- 8:34 hour

void draw(int n);

int main(void){

    int height = get_int("Height : ");
    draw(height);
   
}


void draw(int n){

    for (int i=0; i < n; i++){
        for (int j=0; j < i+1; j++){
            printf("#");
        }
        printf("\n");
    }
}