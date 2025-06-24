#include <stdio.h>

int n;
int i = 1;
int fac4;
int fac5;

int factorial (int n) {
	
	while (n > 1) {
		i = i * n;
		int n = n - 1;
	}
	return i;
}

int main (int argc, char *argv[]) {
	int fac4 = factorial(4);
	int fac5 = factorial(5);
	printf("4! = %d, 5! = %d\n", fac4, fac5);
	return 0;
}