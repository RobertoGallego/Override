#include <stdio.h>
#include <string.h>

int verify_user_name(char *strName) {
    puts("verifying username....\n");
    return (strncmp("dat_wil", strName, 7));
}

int verify_user_pass(char *strPass) {
    return (strcmp("admin", strPass));
}

int     main() {
    char strName[256];
    char strPass[16];
    int name;
    int pass;
    
    puts("********* ADMIN LOGIN PROMPT *********");
    printf("Enter Username: ");
    fgets(strName, 256, stdin);
    name = verify_user_name(strName);

    if (name != 0) {
        puts("nope, incorrect username...\n");
    } else {
        puts("Enter Password: ");
        fgets(strPass, 256, stdin);
        verify_user_pass(strPass);
        if (pass != 0) {
            puts("nope, incorrect password...\n");
        }
    }
    
    return(0);
}
