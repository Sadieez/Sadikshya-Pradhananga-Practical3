/* Convert Celsius To Fahrenheit Exercise 2 - Practical 2
@author Sadikshya Pradhananga */

#include <stdio.h>

int main(){
 double celsius;
 double fahrenheit;

 printf ("Enter a degree in celsius: ");
 scanf(" %lf", &celsius); /* %lf is used for double*/

 fahrenheit = (9.0 / 5) * celsius + 32;
 printf("%.1f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);
 return 0;
}