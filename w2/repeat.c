#include <stdio.h>

#define MAX 50
int main(int argc, char **argv)
{
    char buffer[MAX]; 
    while (fgets(buffer, MAX, stdin)) { // EOF/error makes fgets return null pointer i.e. 0
        printf("%s", buffer);
    } 

    return 0;
}