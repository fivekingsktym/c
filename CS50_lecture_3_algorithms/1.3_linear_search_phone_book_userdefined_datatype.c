#include <cs50.h>
#include <stdio.h>
#include <string.h>

// phone book :- 7:48 hour

// custom userdefined datatype called "person"
typedef struct{
    string name;
    string number;
}
person;

int main(void){

    // string names[] = {"Moncy", "Abhi"};
    // string numbers[] = {"9876542536", "6475839272"};
    
    person people[2];

    people[0].name = "Moncy";
    people[0].number = "9876542536";

    people[1].name = "Abhi";
    people[1].number = "6475839272";

  

    string name = get_string("Name : ");

    for (int i=0; i < 2; i++){
        if (strcmp(people[i].name, name) == 0){
            printf("Mobile number is: %s| at index position %i\n", people[i].number ,i);
            return 0;
        }
    }

    printf("No record found\n");
    return 1;
   
}