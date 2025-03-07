//Gavin Woodhouse, FizzBuzz C
#include <stdio.h>

int main(void){
    int x = 0;
    while (x <= 50){
        if (x % 15 == 0 && x != 0){
            printf("FizzBuzz\n");
        }else if (x % 3 == 0 && x != 0){
            printf("Fizz\n");
        }else if (x % 5 == 0 && x != 0){
            printf("Buzz\n");
        }else{
            printf("%d\n", x);
        }
        x++;
    }
    return 0;
}