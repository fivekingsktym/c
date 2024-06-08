#include <cs50.h>
#include <stdio.h>

// phone book :- 8:35 hour

// #
// ##
// ###
// ####
// #####

void draw(int n);

int main(void){

    int height = get_int("Height : ");
    draw(height);
   
}


void draw(int n){

    if (n <= 0){
        return;
    }

    draw(n-1);
    // draw(5)
    // draw(4)
    // draw(3)
    // draw(2)
    // draw(1)
    // draw(0)

    for (int i=0; i < n; i++){
       printf("#");
    }
    printf("\n");
    
}



// Exection like this:-

    // main:
    //   input: 5
    //   call draw(5)

    // draw(5):
    //   call draw(4)

    // draw(4):
    //   call draw(3)

    // draw(3):
    //   call draw(2)

    // draw(2):
    //   call draw(1)

    // draw(1):
    //   call draw(0)

    // draw(0):
    //   return

    // return to draw(1):
    //   print "#\n"

    // return to draw(2):
    //   print "##\n"

    // return to draw(3):
    //   print "###\n"

    // return to draw(4):
    //   print "####\n"

    // return to draw(5):
    //   print "#####\n"

    // Final output:
    // #
    // ##
    // ###
    // ####
    // #####


// Q: Is this recursion is a queue style?
// Ans: No, this recursion follows a stack style, not a queue style. Each recursive call waits 
//      for the next call to complete before it can proceed, adhering to the Last-In-First-Out (LIFO) principle of a stack.