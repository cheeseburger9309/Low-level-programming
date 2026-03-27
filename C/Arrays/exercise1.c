/*
Task 1: The Raw Iteration
Create an array: int numbers[] = {10, 20, 30, 40, 50};.
Write a for loop that prints every number in this array, 
but you are forbidden from using numbers[i]. 
You must create a pointer int *ptr = numbers; and use pointer arithmetic 
(*ptr, ptr++) to print the values.
*/

#include <stdio.h>

int main(){

    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers;
    size_t length = sizeof(numbers)/sizeof(int);

    for (int i = 0; i < length; i++){
        printf("Num %d in the array = %d\n", i, *ptr);
        ptr++;
    }

    return 0;
}