/* SecureMenu.c
   Practical 3, Part 3 - Step 4
   Author: Sadikshya Pradhananga */

#include <stdio.h>

int main() {

    int choice;
    int num1, num2, result;

    do {
        printf("\n=== Simple Calculator ===\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");

        if (scanf("%d", &choice) != 1) {
            printf("Error: Please enter a number!\n");
            while (getchar() != '\n');
            choice = 0;
            continue;
        }

        if (choice < 1 || choice > 4) {
            printf("Error: Choice must be between 1 and 4!\n");
            continue;
        }

        if (choice >= 1 && choice <= 3) {

            printf("Enter first number: ");
            scanf("%d", &num1);

            printf("Enter second number: ");
            scanf("%d", &num2);

            if (choice == 1) {
                result = num1 + num2;
                printf("Result: %d + %d = %d\n", num1, num2, result);
            } else if (choice == 2) {
                result = num1 - num2;
                printf("Result: %d - %d = %d\n", num1, num2, result);
            } else if (choice == 3) {
                result = num1 * num2;
                printf("Result: %d * %d = %d\n", num1, num2, result);
            }
        }

    } while (choice != 4);

    printf("Thank you for using the calculator!\n");

    return 0;
}