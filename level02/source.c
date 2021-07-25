#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int     main() {
    char    *filename;
    int     length;
    char    username[100];
    char    password[100];
    char    ptr[41];
    FILE    *fp;

    filename = "/home/users/level03/.pass";
    fp = fopen(filename , "r");

    if (fp == NULL) {
        fwrite("ERROR: failed to open password file\n",1 , 36, stderr);
        exit(1);
    } else {
        length = fread(ptr, 1, 41, fp);
        ptr[strcspn(ptr, "\n")] = 0;
        if (length, 0x29) {
            fwrite("ERROR: failed to red password file\n", 36, 1, stderr);
            fwrite("ERROR: failed to red password file\n", 36, 1, stderr);
            exit(1);
        } else {
            fclose(fp);
            puts("===== [ Secure Access System v1.0 ] =====");
            puts("/***************************************\\");
            puts("| You must login to access this system. |");
            puts("\\**************************************/");

            printf("--[ Username: ");
            fgets(username, 100, stdin);
            username[strcspn(username, "\n")] = 0;

            printf("--[ Password: ");
            fgets(password, 100, stdin);
            password[strcspn(password, "\n")] = 0;
            
            puts("*****************************************");
            if (strncmp(ptr, password, 41)) {
                printf(username);
                puts("does not have access!");
                exit(1);
            } else {
                printf("Greetings, %s!\n", username);
	            system("/bin/sh");
            }
        }
    }
    return(0);
}