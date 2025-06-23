#include <stdio.h>

int main(){

    int result;
    int i = 0;

    while (i++ < 100){
        result = i*(i+1)/2;
        printf("%d\n", result);

    }
    return 0;

}