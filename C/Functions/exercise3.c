/*
Task 4: The Recursive Count (Coding Task)
Write a recursive function void countdown(int n) that prints n, n-1, n-2, 
all the way down to 0.
Critical: You must include a base case so it doesn't cause a Stack Overflow!
*/

#include <stdio.h>

void countdown(int n){

    if (n < 0) return;

    else if (n == 0){
        printf("%d\n", n);
        return;
    } else {
        printf("%d, ", n);
        countdown(n-1);
    }
    return;
}

int main(){
    
    int n = 1;

    countdown(n);

    return 0;
}