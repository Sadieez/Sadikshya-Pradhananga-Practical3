/* MultiplicationTable.c
   Practical 3, Part 3 - Step 5
   Author: Sadikshya Pradhananga */

#include <stdio.h>

int main() {

    int userSize;

    printf("Enter table size (1-9): ");
    scanf("%d", &userSize);

    if (userSize < 1 || userSize > 9) {
        printf("Error: Size must be between 1 and 9!\n");
        return 1;
    }

    printf("\nMultiplication Table (%dx%d):\n", userSize, userSize);

    printf("     ");
    for (int i = 1; i <= userSize; i++) {
        printf("%4d", i);
    }
    printf("\n     ");
    for (int i = 1; i <= userSize; i++) {
        printf("----");
    }
    printf("\n");

    for (int i = 1; i <= userSize; i++) {
        printf("%3d |", i);
        for (int j = 1; j <= userSize; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}