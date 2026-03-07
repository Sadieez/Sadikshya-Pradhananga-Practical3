/* FutureDates.c
   Exercise 1
   Author: Sadikshya Pradhananga */

#include <stdio.h>

int main() {

    int today;
    int daysAfter;
    int futureDay;

    char *dayNames[] = {"Sunday", "Monday", "Tuesday", "Wednesday",
                        "Thursday", "Friday", "Saturday"};

    printf("Enter today's day (0=Sunday, 1=Monday, 2=Tuesday, 3=Wednesday, 4=Thursday, 5=Friday, 6=Saturday): ");
    scanf("%d", &today);

    if (today < 0 || today > 6) {
        printf("Error: Day must be between 0 and 6\n");
        return 1;
    }

    printf("Enter number of days after today: ");
    scanf("%d", &daysAfter);

    if (daysAfter < 0) {
        printf("Error: Please enter a positive number\n");
        return 1;
    }

    futureDay = (today + daysAfter) % 7;

    printf("Today is %s.\n", dayNames[today]);
    printf("%d days later is %s.\n", daysAfter, dayNames[futureDay]);

    return 0;
}
