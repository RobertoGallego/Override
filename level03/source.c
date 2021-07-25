#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// clear_stdin
// get_unum
// prog_timeout

void     decrypt(password) {
    int var_1dh; // ebp-1d      ---> Q}|u 
    int var_19h; // ebp-0x19    ---> `sfg
    int var_15h; // ebp-0x15    ---> ~sf{
    int var_11h; // ebp-0x11    ---> }|a3
    int var_dh;  // mov byte push to eax and xor

    char *crypt = "Q}|u`sfg~sf{}|a3";
    size_t len = strlen(crypt);
    int i = 0;
    while (i < len) {
        crypt[i] = crypt[i] ^ password;
        i++;
    }
    // var28h == var24h 
    if (strcmp(crypt, "Congratulations") == 0) {
        system("/bin/sh");
    } else {
        puts("\nInvalid Password");
    }
    return (0);
}

void     test(password, arg_ch) {
    int var_ch;

    var_ch = password - arg_ch;

    if (var_ch <= 0x15) {
        password = rand();
    }
    decrypt(password);
    return (0);
}

int     main() {
    int password;     // esp+0x8
    time_t seed;
    
    seed = time(0);
    srand(seed);
    puts("***********************************");
    puts("*\t\tlevel03\t\t**");
    puts("***********************************");
    printf("Password:");
    scanf("%d", password);
    test(password, 0x1337d00d);
    return (0);
}