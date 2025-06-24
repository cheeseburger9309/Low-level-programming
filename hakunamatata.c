#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() {
    char * str = (char *)malloc(16 * sizeof(char));
	strcpy(str, "hakuna matata!"); // this line should copy "hakuna matata!"
	                         // into our char array
	printf("%s\n", str);
	// Anything else?
    free(str);
}