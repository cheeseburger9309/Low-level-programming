#include <stdio.h>

// int main(int argc, char ** argv){
//     for (int i = 1; i < argc; i++) {
//         printf("%s\n", argv[i]);
//     }
//     return 0;
// }

int i = 1;

int main(int argc, char ** argv){
    
    loop_start:
        if ( i >= argc) {
            goto loop_end;
        }
        if ( i < argc) {
            printf("%s\n", argv[i]);
            i = i+1;
            goto loop_start;
        }

    loop_end:
    // printf("End of loop\n");
        

    // print:
    // printf("%s\n", argv[i]);
    return 0;
}