#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int password;

    puts("***********************************");
	puts("*          -  Level00  -          *");
	puts("***********************************");
	printf("Password:");
	scanf("%d", &password);
    
    if (password == 5276) {
        printf("Authenticated!");
        system("/bin/sh");
    } else {
        printf("Invalid Password!");
    }
    return (0);
} 