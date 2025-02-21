//Gavin Woodhouse, Financial Calculator Update C

#include <stdio.h>

void money(char expence[]){
    printf("What is your monthly %s?\n", expence);
    scanf("%f", &amount);
}

char info(float income, float amount, char type[]){
    float type_percent = amount/income*100;
    printf("You spend $%.2f on %s and that is %.2f percent of your income\n", amount, type, type_percent);
}

int main(void){
    printf("This is a budget calculator. Type in your monthly spending to how much of your income you spend.\n");
    income = money("income")
    rent = money("income")
    utilities = money("income")
    groceries = money("income")
    transportation = money("income")
    float savings = income/10;
    float spending = income - (rent+utilities+groceries+transportation+savings);
    info(income, rent, "rent");
    info(income, utilities, "utilities");
    info(income, groceries, "groceries");
    info(income, transportation, "transportation");
    info(income, savings, "savings");
    info(income, spending, "everything in total");
}