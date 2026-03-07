/*Practical 2, Part 2 (E)*/
#include <stdio.h>
int main(){
    const int Accommodation = 500;
    float foodExpenses;
    float leisureExpenses; 
    float cloathesExpences;
    float travelExpenses;
    float totalSpent;
    printf("\n Enter food expenses: "); 
    scanf("%f", &foodExpenses);

    printf(" Enter Leisure Expenses:");
    scanf("%f" ,&leisureExpenses); 

    printf(" Enter Clothes Expenses:");
    scanf("%f" , &cloathesExpences);

    printf(" Enter travel expenses:");
    scanf("%f" , &travelExpenses);

    totalSpent = foodExpenses + leisureExpenses + cloathesExpences + Accommodation + travelExpenses;
    printf("\n The total expenditure this month was $%.2f \n\n", totalSpent);
return 0;

}