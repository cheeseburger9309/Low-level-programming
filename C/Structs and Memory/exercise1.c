/*
struct NetworkHeader {
    char version;     // 1 byte
    int packet_id;    // 4 bytes
    char flags;       // 1 byte
};

Task 1: The Memory Architect (Brain Teaser & Code)
Look at the NetworkHeader struct above that takes up 12 bytes due to padding.
By simply rearranging the order of the variables inside the struct, you can reduce its size to 8 bytes without losing any data.
Write the optimized version of this struct. What is the golden rule for ordering struct members to minimize wasted padding?
*/

#include <stdio.h>

struct NetworkHeader {
    char version;
    char flags;
    int packet_id;
};

int main(){

    printf("Size of struct is: %zu\n", sizeof(struct NetworkHeader));

    return 0;
}