//Gavin Woodhouse, Silly Sentences C
#include <stdio.h>
char location[20];
char famous[20];
char colour[20];
char adverb[20];
char verb[20];

int main(void){
    //introduce user to program. . .tell them what is happening (print statement)
    printf("This is a MadLib. Follow the instructions to make a silly sentence!\n");
    //create user inputs (print statements with questions AND scanf to collect the info)(same as the number of variables)
    printf("Type in a place you go to frequently.\n");
    scanf("%s", location);
    printf("Type in a celebrity's name.\n");
    scanf("%s", famous);
    printf("Type in a color.\n");
    scanf("%s", colour);
    printf("Type in an adverb (word that describes an action).\n");
    scanf("%s", adverb);
    printf("Type in a verb (action) in the past tense.\n");
    scanf("%s", verb);
    //insert variables into sentence to show the user (print statement, only 1) example: "hello %s", name
    printf("I went to my local %s, but I just so happened to bump into %s. Before I could talk to them though, they turned %s and %s %s into the crowd. Never meet your heroes.\n", location, famous, colour, adverb, verb);
    return 0;
}