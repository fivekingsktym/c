#include <stdio.h>
#include <stdlib.h>

// 11:48 hour, 2.0_dynamic_array_resizer_malloc_realloc

int main(void)
{
    // Allocate memory for an array of 3 integers
    int *list = malloc(3 * sizeof(int));
    // Check if the memory allocation was successful
    if (list == NULL) // malloc will return NULL when out of memory
    {
        return 1; // Return with an error code
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // without remalloc ##################
    // Allocate memory for a new array of 4 integers
    // int *temp = malloc(4 * sizeof(int));
    // Check if the memory allocation was successful
    // if (temp == NULL){
    //     free(list); // Free the previously allocated memory
    //     return 1; // Return with an error code
    // }

    // Copy the values from the old array to the new array
    // for (int i = 0; i < 3; i++){
    //     temp[i] = list[i];
    // }
    // temp[3] = 4; // Add a new value to the array
    // free(list);  // Free the old array
    // list = temp;  // Point the list to the new array
    // ###################################


    // with using remalloc ###############
    // Allocate memory for a new array of 4 integers, resizing the old array
    int *temp = realloc(list, 4 * sizeof(int));
    // Check if the memory allocation was successful
    if (temp == NULL){
        free(list); // Free the previously allocated memory
        return 1; // Return with an error code
    }
    list = temp; // Point the list to the new array
    list[3] = 4; // Add a new value to the array
    // ###################################

    for (int i = 0; i < 3; i++){
        printf("%i\n", list[i]); // Print the values of the array
    }

   
    free(list); // Free the allocated memory
    return 0;


    
}