/*
Task 4: In-Place Array Reversal
Write void reverse_array(int *arr, size_t length).
Reverse the array in-place. You must use the Two-Pointer technique: 
create a left pointer at the start of the array, and a right pointer at the end. 
Swap their values, increment left, decrement right, and stop when they cross.
*/

#include <stdio.h>

void reverse_array(int *arr, size_t length){

    if (arr == NULL || length == 0) return;

    int *start = arr;
    int *end = arr + (length - 1);

    while (start < end){
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    return;
}

int main(){

    int arr[] = {10, 20, 30, 40, 50};
    size_t length = sizeof(arr)/sizeof(int);

    printf("Array before reversal:\n");
    for (int i = 0; i < length; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    reverse_array(arr, length);

    printf("Array after reversal:\n");
    for (int i = 0; i < length; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}