//Gavin Woodhouse, Conditionals Notes C
#include <stdio.h>
#include <string.h>

char name[] = "Gavin";
int num = 8;

int main(void){
    if(strcmp(name, "Gavin") == 0){
        printf("Hello me!\n");
    }else{
        printf("Hello %s!\n", name);
    }
// && = and
// || = or
// != = not
    if(num > 5 && num < 10){
        printf("%d is a large single digit number\n", num);
    }else if (num > 10){
        printf("%d is not a single digit number\n", num);
    }else{
        printf("%d is a small single digit number\n", num);
    }

    return 0;
}