//Gavin Woodhouse, Name Decorator C
#include <stdio.h>
#include <string.h>

char name[20];

int main(void){
    printf("Hello! What is your first name?\n");
    scanf("%s", name);
    char absolute_value[] = "|||";
    strcat(name, absolute_value);
    strcat(absolute_value, name);
    printf("%s\n", absolute_value);
    return 0;
}