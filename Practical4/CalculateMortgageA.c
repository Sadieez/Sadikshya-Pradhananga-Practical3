/* CalculateMortgageA.c
   Practical 4
   Author: Sadikshya Pradhananga */

#include <stdio.h>

int main() {

    
    double salary1, salary2, largerSalary, smallerSalary, mortgage;

    
    printf("Enter two salaries separated by a space:\n");

    
    scanf("%lf %lf", &salary1, &salary2);

    
    if (salary1 > salary2)
        largerSalary = salary1;
    else
        largerSalary = salary2;

    
    if (salary1 > salary2)
        smallerSalary = salary2;
    else
        smallerSalary = salary1;

    
    mortgage = largerSalary * 3;
    mortgage += smallerSalary;

    
    printf("The maximum size of mortgage is: £ %.2lf\n", mortgage);

}