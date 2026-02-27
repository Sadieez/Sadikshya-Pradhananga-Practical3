/* ElectricityBillB.c
   Practical 3, Part 3 - Step 6
   Author: Sadikshya Pradhananga */

#include <stdio.h>

int main() {

    int numCustomers;
    int totalUnits = 0;

    printf("How many customers to process (max 10): ");
    scanf("%d", &numCustomers);

    if (numCustomers < 1 || numCustomers > 10) {
        printf("Error: Must be between 1 and 10\n");
        return 1;
    }

    for (int c = 1; c <= numCustomers; c++) {

        int previousMetre, currentMetre, day, month;

        printf("\n--- Customer %d ---\n", c);
        printf("Enter previous metre, current metre, day and month:\n");
        scanf("%d %d %d %d", &previousMetre, &currentMetre, &day, &month);

        printf("%d %d %d %d\n", previousMetre, currentMetre, day, month);

        if (currentMetre < 0 || currentMetre > 9999)
            printf("Error: current meter reading out of range\n");

        if (previousMetre < 0 || previousMetre > 9999)
            printf("Error: previous meter reading out of range\n");

        if (previousMetre > currentMetre)
            printf("Error: previous reading is more than present reading\n");

        if ((currentMetre - previousMetre) > 1000)
            printf("Error: electricity used is more than 1000 units\n");

        if (month < 1 || month > 12)
            printf("Error: month out of range\n");

        totalUnits += (currentMetre - previousMetre);
    }

    printf("\n=== SUMMARY ===\n");
    printf("Total customers: %d\n", numCustomers);
    printf("Total electricity units used: %d\n", totalUnits);

    return 0;
}
