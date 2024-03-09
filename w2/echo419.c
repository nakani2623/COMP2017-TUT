#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc < 2)
        return 0;
        
    int i;
    i = 1;
    while (i < argc - 1)
    {
        printf("%s ", argv[i]);
        i++;
    }

    printf("%s\n", argv[i]);
    return 0;
    
}