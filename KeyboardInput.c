/* Practical 3 part 1
Author : Sadikshya Pradhananga*/ 
#include <stdio.h>

int main() {
char firstWord [20];
char secondWord[20];
int num;
printf("Enter twor words and an intiger from the keyboard:\n");
if (scanf("%19s %19s %d" , firstWord, secondWord, &num) != 3) {
    printf("Error: please enter two words and a number\n");
    return 1;
}
printf("%s %s \n%d \n", firstWord, secondWord,num);
return 0;
}