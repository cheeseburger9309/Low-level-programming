/*
Task 1: The Formatted Output
Write a complete C program (including main and <stdio.h>) that declares an integer age (set to 25), 
a character grade (set to 'A'), and a float score (set to 98.5). Print them all in a single formatted sentence.
*/

#include <stdio.h>

int main(){
    int age = 25;
    char grade = 'A';
    float score = 98.5;

    printf("The age is %d, grade is %c, and the score is %0.2f\n", age, grade, score);

    return 0;
}