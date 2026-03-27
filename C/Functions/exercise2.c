/*
Task 3: The Safe String Return (Coding Task)
You saw why Task 1 fails (returning a local array). 
If you must return a string from a function, you have two safe options:

Pass a pre-allocated buffer into the function (so the caller owns the memory).

Use static char[] so the memory lives forever in the Data segment, not the Stack.

Write a function const char* get_status_msg(int code) that takes a status code. 
If the code is 0, return the string "OK". If it is 1, return "ERROR". 
Do this safely without triggering a dangling pointer.
*/

#include <stdio.h>

const char* get_status_msg(int code){
    
    if (code == 0) {
        static char string[] = "OK";
        return string;
    } else if (code == 1){
        static char string[] = "ERROR";
        return string;
    }
    return "UNKNOWN_CODE";
}

int main(){

    int code = 10;

    const char* status = get_status_msg(code);

    printf("The string for code %d is %s\n", code, status);
    return 0;
}