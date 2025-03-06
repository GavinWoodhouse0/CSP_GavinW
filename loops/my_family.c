//Gavin Woodhouse, My Family C
#include <stdio.h>

int main(void){
    char family[][25] = {"Jim", "Sam", "Jack", "Major General Ban-ki Moon"};
    int flength = sizeof(family)/sizeof(family[0]);
    int f = 0;
    while(f<flength){
        printf("Hello %s! How was your day today?\n", family[f]);
        f++;
    }
    return 0;
}