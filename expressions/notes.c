//Gavin Woodhouse, Expressions Notes C
#include <stdio.h>
#include <math.h> //exponent time
// integers int when we set the variable and %d when we print
// floats float when we set the variable and %f when we print
// strings char when we set the variable and %s when we print
int mynum;
float percent;
int add = 4+5;
int sub = 4-5;
int mul = 4*5;
float div = 6/4;
int mod = 6%4;
double pow(double _5, double _2);

int main(void){
    printf("Type a number: \n");
    scanf("%d", &mynum);
    printf("You inputed %d\n", mynum);
    printf("Give me a percent as a decimal: \n");
    scanf("%f", &percent);
    printf("Your percent is %f\n", percent);
    printf("%d\n", add);
    printf("%d\n", sub);
    mul = 6*4;
    printf("%d\n", mul);
    printf("%.2f\n", div);
    printf("%d\n", mod);
    printf("%d\n", add);
    return 0;
}

double pow(double _5, double _2)
{
    return 0.0;
}
