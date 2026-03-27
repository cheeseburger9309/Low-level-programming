/*
Task 7: Size Check
Different hardware gives different sizes to variables. 
Use the sizeof() operator to print the exact byte size of a char, an int, 
and a double on your machine.
*/

#include <stdio.h>

int main(){

    printf("The size of char is: %zu\n", sizeof(char));
    printf("The size of int is: %zu\n", sizeof(int));
    printf("The size of double is: %zu\n", sizeof(double));

    return 0;
}