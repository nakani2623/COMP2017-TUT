#include <stdio.h>
int my_strlen(const char* p) { 
    //TODO
    int len = 0;
    while (*p != '\0') {
        ++len;
        ++p;
    }
    return len;

}
int main(void) 
{
    printf("%d\n", my_strlen(""));
    printf("%d\n", my_strlen("123"));
    printf("%d\n", my_strlen("abc\n"));
    printf("%d\n", my_strlen("lorem\0ipsum\n")); // should output 5 
    printf("%d\n", my_strlen("lorem ipsum\n")); // should output 12 return 0;
}