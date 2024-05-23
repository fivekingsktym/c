#include <cs50.h>
#include <stdio.h>

int get_negative_int(void); // function initialization

int main(void) {
    int i = get_negative_int(); // calling the function, we can expect the result in "i" variable
    printf("%i\n", i); // just a print statement to print "i"
}


int get_negative_int(void){
    int n;

    do
    {
        n = get_int("Negative Integer : ");
    }
    while(n < 0); // when the input true, i will go to the "do" section infinite times,
                  // when the input False, then exit the loop

    return n; // when you get the "n" value, then it will get return to the main program section

}