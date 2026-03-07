/* CalculateMortgageB.c
   Author: Sadikshya Pradhananga */

#include <stdio.h>

double largerSalary(double salary1, double salary2);
double smallerSalary(double salary1, double salary2);

int main() {

    double salary1, salary2, mortgage;

    printf("Enter two salaries separated by a space:\n");

    scanf("%lf %lf", &salary1, &salary2);

    mortgage = largerSalary(salary1, salary2) * 3;

    mortgage += smallerSalary(salary1, salary2);

    printf("The maximum size of mortgage is: £ %.2lf\n", mortgage);

}

// function stub
double largerSalary(double salary1, double salary2) {
    return 1;
}

// function stub
double smallerSalary(double salary1, double salary2) {
    return 1;
}