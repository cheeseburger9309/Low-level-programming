/*
Task 6: The Character Math
Declare char letter = 'A';. 
Add 1 to letter and print it using the %c format specifier. What prints out?
*/

#include <stdio.h>

int main(){
    char letter = 'A';

    printf("A + 1 = %c\n", letter + 1);
    return 0;
}