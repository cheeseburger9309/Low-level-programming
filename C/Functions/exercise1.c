/*
Task 2: The Multi-Return (Coding Task)
In C, a function can only return one value. But systems engineers often need
a function to return multiple pieces of data.
Write a function void get_min_max(int a, int b, int c, int *min, int *max) 
that takes three normal integers, calculates the smallest and largest, and uses 
the pointers to "return" those two values back to the caller. 
Write a quick main() to test it.
*/

#include <stdio.h>

void get_min_max(int a, int b, int c, int *min, int *max){

    if (min == NULL || max == NULL) return;

    *min = a;
    *max = a;

    if (b < *min) *min = b;
    if (c < *min) *min = c;

    if (b > *max) *max = b;
    if (c > *max) *max = c;

    return;
}

int main(){

    int a = 5;
    int b = 11;
    int c = 10;
    int max, min;

    get_min_max(a, b, c, &min, &max);
    printf("Min = %d\nMax = %d\n", min, max);

    return 0;
}