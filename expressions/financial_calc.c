//Gavin Woodhouse, Fianacial Calculator C
#include <stdio.h>

float income;
float rent;
float utilities;
float groceries;
float transportation;

int main(void){
    printf("This is a budget calculator. Type in your monthly spending to how much of your income you spend.\n");
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
    float savings = income/10;
    float spending = rent+utilities+groceries+transportation+savings;
    float rent_percent = rent/income*100;
    float utilities_percent = utilities/income*100;
    float groceries_percent = groceries/income*100;
    float transportation_percent = transportation/income*100;
    float savings_percent = savings/income*100;
    float spending_percent = spending/income*100;
    printf("You spend $%.2f on rent and that is %.2f percent of your income\n", rent, rent_percent);
    printf("You spend $%.2f on utlitities and that is %.2f percent of your income\n", utilities, utilities_percent);
    printf("You spend $%.2f on groceries and that is %.2f percent of your income\n", groceries, groceries_percent);
    printf("You spend $%.2f on transportation and that is %.2f percent of your income\n", transportation, transportation_percent);
    printf("You save $%.2f and that is %.2f percent of your income\n", savings, savings_percent);
    printf("You spend $%.2f in total and that is %.2f percent of your income\n", spending, spending_percent);
    return 0;
}