/*Practical 2, Part 2 (C)*/
#include <stdio.h>
int main() {
    float foodExpenses = 250.0;
    float leisureExpenses = 80.0;
    float cloathesExpences = 60.0;
    float accommodationExpenses = 500.0;
    float travelExpenses = 70.0;
    float totalSpent;
    totalSpent = foodExpenses + leisureExpenses + cloathesExpences + accommodationExpenses + travelExpenses;
    printf("The total expenditure this month was $%.2f \n\n", totalSpent);
return 0; 
}