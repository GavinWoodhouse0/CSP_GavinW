//Gavin Woodhouse, Template
#include <stdio.h>
#include <string.h>

char name[20];

int main(void){
    //printf("Please tell me your full name:\n");
    //scanf("%s", name);
    //fgets(name, 20, stdin);
    //printf("Hello %s, welcome to my program", name);
    //char sentence[] = "The quick brown fox jumps over the lazy dog";
    //printf("%c\n", sentence[16]);
    //printf("%d\n", strlen(sentence));
    char one[] = "Hello ";
    char two[] = "World!";
    char three[] = "This is my program. ";
    two[5] = '?';
    strcat(one, two);
    printf("%s\n", one);
    strcat(three, one);
    printf("%s\n", three);
    return 0;
}