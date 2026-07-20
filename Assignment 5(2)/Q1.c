#include <stdio.h>

typedef unsigned char u8;

int main()
{
    u8 a = 100;

    printf("Value of a = %u\n", a);
    printf("Size of u8 = %lu bytes\n", sizeof(u8));

    return 0;
}
