#include <stdio.h>

int i;

int amaze1(){
    for (i=0; i<10; i++){
        if(i%2 == 1){
            printf("%d ", i);
        }
    }
}

int amaze2(){
    i = 0;
    while(i++ < 10){
        if(i%2 == 1){
            printf("%d ", i);
        }
    }
}

int amaze3(){
    i = 0;
    do
    {
      if(i%2 == 1){
            printf("%d ", i);
        }  /* code */
    } while (i++ < 10);
}

int amaze4(){
    i = 0;
    loop_start:

        if (i >= 10)
        {
            goto loop_end;
        }
        
        else if(i%2 != 1){
            i++; 
            goto loop_start; // goto loop_end;
        }
        else{
            printf("%d ", i);
            i++;
            goto loop_start;
        }
    loop_end:
        // i++;

}

int amaze5(){
    for ( i = 0; i < 10; i++)
    {
        if (i%2 == 1)
        {
            printf("%d ", i);
        }
        else{
            continue;
        }
    }
}

int amaze6(){
    for ( i = 0; i < 10; i++)
    {
        switch (i){
            case (0):
            // printf("1");
            continue;
            case (1):
            printf("1 ");
            continue;
            case (2):
            // printf("1");
            continue;
            case (3):
            printf("3 ");
            continue;
            case (4):
            // printf("1");
            continue;
            case (5):
            printf("5 ");
            continue;
            case (6):
            // printf("1");
            continue;
            case (7):
            printf("7 ");
            continue;
            case (8):
            // printf("1");
            continue;
            case (9):
            printf("9 ");
            break;
            // default:
            // printf("9");

        }
    }
}

void amazeWOW() {
	int i;
	printf("amazeWOW:\t");
	for (i = 0; i <= 10; i++) {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

int main(){
    amaze1();
    amaze2();
    amaze3();
    amaze4();
    amaze5();
    amaze6();
    amazeWOW();

    return 0;
}