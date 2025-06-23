#include <stdio.h>

int main(){

    int result;
    int i;

    for(i=0; i < 100; ++i){
        result = i*(i+1)/2;
        printf("%d\n", result);

    }
    return 0;

}