/*
Task 4: The Hacker's Swap (No Temp Variable)
Write a function void math_swap(int *a, int *b) that swaps two integers without
declaring a third temporary variable. You can only use addition (+) and subtraction (-).
*/

#include <stdio.h>

void math_swap(int *a, int *b){
    if (a == NULL || b == NULL){
        printf("Null pointers have been passed to math_swap!");
        return;
    } else if (a == b){
        return;
    }

    *a = (*a + *b);
    *b = (*a - *b);
    *a = (*a - *b);
}

int main(){

    int a = 5;
    int b = 2;

    math_swap(&a, &b);
    printf("The value of a is %d, b is %d\n", a, b);

    return 0;
}