/*Practical 2, Part 2 (D)*/

#include <stdio.h>
int main(){
    float foodExpenses;
    float leisureExpenses;
    float cloathesExpences;
    float accommodationExpenses;
    float travelExpenses;
    float totalSpent;
   
    printf("\n Enter food expenses: "); /*printf to ask question, scanf to answer */
    scanf("%f", &foodExpenses); /*%f decrared float*/

    printf("\n Enter Leisure expenses: ");
    scanf("%f" ,&leisureExpenses); /*& tells scanf where to store the value entered by the user*/
    
    printf("\n Enter Clothes expenses: ");
    scanf("%f" , &cloathesExpences);

    printf("\n Enter accommodation expenses: ");
    scanf("%f" , &accommodationExpenses);

    printf("\n Enter travel expenses: ");
    scanf("%f" , &travelExpenses);  

    totalSpent = foodExpenses + leisureExpenses + cloathesExpences + accommodationExpenses + travelExpenses;
    printf("\n The total expenditure this month was $%.2f \n\n", totalSpent);
return 0;
}