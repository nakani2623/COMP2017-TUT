#include <stdio.h>

int main(int argc, char **argv) 
{
    if (argc < 2)
        return 1;
    char *msg = argv[1];
    printf("What is your name? ");

    char buffer[20];
    fgets(buffer, 20, stdin);
    printf("%s, %s", msg, buffer);

    // fgets will stop reading when newline is read. refer to man (3) fgets
    // file stream will remain
    fgets(buffer, 20, stdin);
    printf("%s, %s", msg, buffer);

    return 0;
}