//Gavin Woodhouse, Updated Hello World C
#include <stdio.h>

char hello(char name[]){
    printf("Hello %s\n", name);
    return 0;
}

int main(void){
    hello("Gavin");
    hello("Tatiana");
    hello("Michael");
    hello("Josephine");
    hello("Max");
    return 0;
}