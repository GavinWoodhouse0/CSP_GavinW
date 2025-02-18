//Gavin Woodhouse, Functions Notes in C
#include <stdio.h>

void add(int numOne,int numTwo){
    //printf("%d\n", 6+8);
    //return 0;
    printf("%d\n", numOne+numTwo);
}

char input(char type[20]){
    char answer [50];
    printf("Please give me a %s:\n", type);
    scanf("%s", answer);
    return answer;
}

int main(void){
    //printf("Hello World\n");
    //add();
    input("name");
    input("verb");
    input("place");
    printf("%s was %s until they somehow reached %s",input("name"),input("verb"),input("place"));
    return 0;
}