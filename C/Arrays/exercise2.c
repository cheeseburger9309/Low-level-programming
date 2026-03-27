/*
Task 3: The Custom strlen
Write size_t my_strlen(const char *str). 
Calculate the length of the string using a secondary pointer that walks forward 
until it hits \0, and then return the mathematical difference between 
the two pointers. (No i counters!).
*/

#include <stdio.h>

size_t str_len(const char* str){
    if (str == NULL) return 0;
    const char* ptr = str;
    while (*ptr != '\0'){
        ptr++;
    }
    return ptr - str;
}

int main(){

    const char str[] = "Hello World!";
    printf("The length of the string %s is %ld\n", str, str_len(str));
    
    return 0;
}