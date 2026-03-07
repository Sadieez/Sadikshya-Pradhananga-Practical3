/*Practical 2 Part 2 (A)*/
#include <stdio.h>
int main() {
    float foodExpenses =300.0; /*this creates a variable called foodExpenses and stores the value*/
    /*float is used to store a decimal value */
    float leisureExpenses = 100.0;
    float clothingExpenses = 100.0;
    float totalSpent; /*creates a variable but doesn't store a value yet*/
    totalSpent = foodExpenses + leisureExpenses + clothingExpenses;
    printf("The total expenditure this month was $%.2f \n\n", totalSpent); /*%.2f this is used to display a float no., .2 displayes 2 decimal no.'s  */

return 0;
}