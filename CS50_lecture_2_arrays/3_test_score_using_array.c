#include <cs50.h>
#include <stdio.h>

int main(void) {
    int scores[3];
    // scores[0] = 72;
    // scores[1] = 73;
    // scores[2] = 33;

    // scores[0] = get_int("Score 1: ");
    // scores[1] = get_int("Score 2: ");
    // scores[2] = get_int("Score 3: ");

    for (int i = 0; i < 3; i++){
        scores[i] = get_int("Score : ");
    }


    // printf("Average: %f\n", (score1 + score2 + score3)/3.0);
    // or
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2])/ (float) 3);
}
