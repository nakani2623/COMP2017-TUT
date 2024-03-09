#include <stdio.h>

int main() 
{
    int x y z;
    printf("int size: %d, address: %p", sizeof(x), &x);
    printf("%p %p\n", &x, &x + 1);
    printf("%p %p\n", &y, &y + 1);
    printf("%p %p %td\n", &z[1], z + 5, &z[12] - &z[9]);
    printf("%p %p\n", &z[3] - 1, &z[20] - 5);

    double u[100];
    printf("int size: %d, address: %p", sizeof(double), &u);

}