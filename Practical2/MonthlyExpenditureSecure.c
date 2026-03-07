#include <stdio.h>
#include <stdlib.h>

const int Accommodation = 500;

int main() {
    float foodExpenses;
    float leisureExpenses;
    float clothesExpenses;
    float travelExpenses;
    float totalSpent;

    char buffer[50];

    printf("Enter food expenses: $");
    fgets(buffer, 50, stdin);
    foodExpenses = atof(buffer);
    if (foodExpenses < 0) {
        printf("Invalid! Cannot be negative.\n");
        return 1;
    }

    printf("Enter leisure expenses: $");
    fgets(buffer, 50, stdin);
    leisureExpenses = atof(buffer);
    if (leisureExpenses < 0) {
        printf("Invalid! Cannot be negative.\n");
        return 1;
    }

    printf("Enter clothes expenses: $");
    fgets(buffer, 50, stdin);
    clothesExpenses = atof(buffer);
    if (clothesExpenses < 0) {
        printf("Invalid! Cannot be negative.\n");
        return 1;
    }

    printf("Enter travel expenses: $");
    fgets(buffer, 50, stdin);
    travelExpenses = atof(buffer);
    if (travelExpenses < 0) {
        printf("Invalid! Cannot be negative.\n");
        return 1;
    }

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses + travelExpenses + Accommodation;

    printf("Total monthly expenditure is: $%.2f\n", totalSpent);

    return 0;
}
