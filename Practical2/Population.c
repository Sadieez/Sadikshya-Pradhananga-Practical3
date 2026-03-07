/* Population Projection
   Exercise 1 - Practical 2
   @author Sadikshya Pradhananga */

#include <stdio.h>

int main() {

    long currentPopulation = 312032486;

    long secondsPerYear = 365 * 24 * 60 * 60;

    long birthsPerYear     = (long)(secondsPerYear / 7.0);
    long deathsPerYear     = (long)(secondsPerYear / 13.0);
    long immigrantsPerYear = (long)(secondsPerYear / 45.0);

    long changePerYear = birthsPerYear - deathsPerYear + immigrantsPerYear;

    printf("Year 1: %ld\n", currentPopulation + changePerYear * 1);
    printf("Year 2: %ld\n", currentPopulation + changePerYear * 2);
    printf("Year 3: %ld\n", currentPopulation + changePerYear * 3);
    printf("Year 4: %ld\n", currentPopulation + changePerYear * 4);
    printf("Year 5: %ld\n", currentPopulation + changePerYear * 5);

    return 0;
}