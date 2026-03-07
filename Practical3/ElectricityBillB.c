/* ElectricityBillB.c
   Practical 3, Part 3 - Step 6
   Author: Sadikshya Pradhananga */

#include <stdio.h>

int main() {

    int numCustomers;
    int totalUnits = 0;

    printf("How many customers to process (max 10): ");

    if (scanf("%d", &numCustomers) != 1) {
        printf("Error: Invalid input\n");
        return 1;
    }

    if (numCustomers < 1 || numCustomers > 10) {
        printf("Error: Must be between 1 and 10\n");
        return 1;
    }

    for (int c = 1; c <= numCustomers; c++) {

        int previousMetre, currentMetre, day, month;
        int valid = 1;

        printf("\n--- Customer %d ---\n", c);
        printf("Enter previous metre, current metre, day and month:\n");

        if (scanf("%d %d %d %d", &previousMetre, &currentMetre, &day, &month) != 4) {
            printf("Error: Invalid input format\n");
            valid = 0;
        }

        if (valid) {
            printf("%d %d %d %d\n", previousMetre, currentMetre, day, month);

            if (currentMetre < 0 || currentMetre > 9999) {
                printf("Error: current meter reading out of range\n");
                valid = 0;
            }

            if (previousMetre < 0 || previousMetre > 9999) {
                printf("Error: previous meter reading out of range\n");
                valid = 0;
            }

            if (previousMetre > currentMetre) {
                printf("Error: previous reading is more than present reading\n");
                valid = 0;
            }

            if ((currentMetre - previousMetre) > 1000) {
                printf("Error: electricity used is more than 1000 units\n");
                valid = 0;
            }

            if (month < 1 || month > 12) {
                printf("Error: month out of range\n");
                valid = 0;
            }

            /* Only add units if everything is valid */
            if (valid) {
                totalUnits += (currentMetre - previousMetre);
            }
        }
    }

    printf("\n=== SUMMARY ===\n");
    printf("Total customers processed: %d\n", numCustomers);
    printf("Total electricity units used (valid customers only): %d\n", totalUnits);

    return 0;
}