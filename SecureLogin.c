/* SecureLogin.c
   Exercise 3
   Author: Sadikshya Pradhananga */

#include <stdio.h>

int main() {

    int correctPIN = 1234;
    int enteredPIN;
    int attempts = 0;

    printf("=== Secure Login System ===\n");

    while (attempts < 3) {

        printf("Enter PIN: ");

        if (scanf("%d", &enteredPIN) != 1) {
            printf("Error: Invalid input, numbers only.\n");
            while (getchar() != '\n');
            continue;
        }

        if (enteredPIN == correctPIN) {
            printf("Access Granted!\n");
            return 0;
        }

        attempts++;

        if (attempts < 3) {
            printf("Wrong PIN. %d attempt(s) left.\n", 3 - attempts);
        }
    }

    printf("Access Denied. Account Locked.\n");

    return 0;
}
