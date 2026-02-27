/* ElectricityBillA.c
   Practical 3, Part 2
   Author: Sadikshya Pradhananga */

#include <stdio.h>

int main() {

    int previousMetre, currentMetre, day, month;

    printf("Enter previous metre, current metre, day and month:\n");

    if (scanf("%d %d %d %d", &previousMetre, &currentMetre, &day, &month) != 4) {
        printf("Error: Invalid input format\n");
        return 1;
    }

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

    if (month >= 1 && month <= 12) {

        if (month==1 || month==3 || month==5 || month==7 ||
            month==8 || month==10 || month==12) {
            if (day < 1 || day > 31)
                printf("Error: day out of range for this month\n");
        }

        else if (month==4 || month==6 || month==9 || month==11) {
            if (day < 1 || day > 30)
                printf("Error: day out of range for this month\n");
        }

        else if (month == 2) {
            if (day < 1 || day > 29)
                printf("Error: day out of range for February\n");
        }
    }

    return 0;
}