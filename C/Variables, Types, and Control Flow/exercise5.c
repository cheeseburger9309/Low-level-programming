/*
Task 5: The Modulo Filter
Write a for loop that iterates from 1 to 50. 
Print the number only if it is a multiple of 3 or a multiple of 5.
*/

#include <stdio.h>

int main(){

    for (int i = 1; i <= 50; i++){
        if (i % 3 == 0 || i % 5 == 0){
            printf("The number is: %d\n", i);
        }
    }

    return 0;
}