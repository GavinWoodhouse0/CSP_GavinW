//Gavin Woodhouse, Fianacial Calculator C
#include <stdio.h>

float income;
float rent;
float utilities;
float groceries;
float transportation;
float savings = income/10;
float spending = rent+utilities+groceries+transportation+savings;
float rent_percent = rent/income*100;
float utilities_percent = utilities/income*100;
float groceries_percent = groceries/income*100;
float transportation_percent = transportation/income*100;
float savings_percent = savings/income*100;
float spending_percent = spending/income*100;

int main(void){
    printf("This is a budget calculator. Type in your monthly spending to how much of your income you spend.");
    printf("What is your monthly income?\n");
    scanf("%f", &income);
    printf("What is your monthly rent?\n");
    scanf("%f", &rent);
    printf("How much do you spend on utilities every month?\n");
    scanf("%f", &utilities);
    printf("How much do you spend on groceries every month?\n");
    scanf("%f", &groceries);
    printf("How much do you spend on transportation every month?\n");
    scanf("%f", &transportation);
    printf("You spend $%.2f on rent and that is %f% of your income\n", rent, rent_percent)
    return 0;
}