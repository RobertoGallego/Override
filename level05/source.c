#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int     main() {
    char buffer[100];
    int i = 0;

    fgets(buffer, 100, stdin);

    while (i < strlen(buffer)) {
        if (buffer[i] >= 'A' && buffer[i] <= 'Z') {
            buffer[i] = buffer[i] ^ 0x20; 
        }
    }

	printf(buffer);
	exit(0);    

    return(0);
}