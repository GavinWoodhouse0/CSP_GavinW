//Gavin Woodhouse, Old Enough C
#include <stdio.h>

int age;

int main(void){
    printf("How old are you?\n");
    scanf("%d", &age);

    if(age >= 21){
        printf("You're old enought to drink! This is a VERY important age. Be responsible.");
    }else if (age >= 18){
        printf("You are now a legal adult, which allows you to do so much that it would take ages to list them all.");
    }else if (age >= 15){
        printf("Depending on who and where you are, you're probably able to drive!");
    }else if (age >= 13){
        printf("You're probably in junior high now or at least will soon be, but more importantly you can enjoy at lot more movies and video games.");
    }else{
        printf("You're not really old enough to do anything actually.");
    }
    return 0;
}