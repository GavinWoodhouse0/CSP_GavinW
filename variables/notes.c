#include <stdio.h>

int main(void){
    char name[30];
    printf("Please tell me your name: \n");
    fgets(name, sizeof(name), stdin);
    printf("Welcome to my program, %sIt doesn't do anything yet.", name);
    return 0;
}