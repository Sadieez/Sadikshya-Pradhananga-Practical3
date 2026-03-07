/*Compound Savings Value
Exercise 3 - Practical 2 
@author Sadikshya Pradhananga*/
#include <stdio.h>
int main() {
    double monthlySaving;
    double accountValue =0;
    double monthlyRate = 0.05 / 12;
    
    printf("Enter the monthly saving amount: $");
    scanf("%lf", &monthlySaving);

    for(int i = 1; i <= 6; i++) {
        accountValue = (accountValue + monthlySaving) * (1 + monthlyRate);
        printf("After month %d, the account value is: $%.2lf\n", i, accountValue); 
    }

    return 0;
}
