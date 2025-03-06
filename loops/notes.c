//Gavin Woodhouse, Loops Notes in C
#include <stdio.h>

int main(void){
    int x;
    for(x=0; x<10; x++){
        printf("Hello\n");
    }
    int i=1;

    while(i<10){
        printf("%d\n", i);
        i++;
    }

    int grades[] = {97, 95, 100, 82, 70, 94, 98, 64};
    printf("%d\n", grades[3]);

    grades[2] = 73;
    printf("%d\n", grades[2]);

    printf("%lu\n", sizeof(grades)); //Number of bytes, not items

    int length = sizeof(grades)/sizeof(grades[0]);
    printf("%d\n", length);

    int t;
    for(t=0; t<10; t+=2){
        printf("%d\n", t);
    }
    int l;
    for(l=0; l<length; l++){
        printf("%d\n", grades[l]);
    }

    int iterator = 100;
    while(iterator >= 0){
        printf("%d\n", iterator);
        iterator -= 10;
    }
    
    char movies[][20] = {"Cinderella", "Smurfs", "Transformers", "Cars", "Up", "1984"};
    int mlength = sizeof(movies)/sizeof(movies[0]);
    int m = 0;
    while(m<mlength){
        printf("%s\n", movies[m]);
        m++;
    }
    return 0;
}