#include <stdio.h>

int i = 1;

int test (int argc, char ** argv){
    printf("%s\n", argv[i]);
        i++;
}

int main(int argc, char ** argv){
    if (i<argc){
        goto test;
    }
}