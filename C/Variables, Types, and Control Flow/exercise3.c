/*
Task 3: The Standard Swap
Write a function void swap(int *a, int *b) that swaps the values of two integers. 
(Even though we haven't done the deep dive on pointers yet, use the * to dereference 
them, just to build the muscle memory).
*/

#include <stdio.h>

void swap(int *a, int *b);

int main(){

    int a = 5;
    int b = 2;

    swap(&a, &b);

    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);

    return 0;
}

void swap(int *a, int *b){

    if (a == NULL || b == NULL){
        printf("Null pointers have been passed to swap!");
        return;
    }

    int temp = *a;
    *a = *b;
    *b = temp;
}