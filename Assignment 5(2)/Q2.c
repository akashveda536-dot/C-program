#include <stdio.h>

typedef unsigned short int  u16;
typedef unsigned int        u32;
typedef unsigned long int   u64;

int main()
{
    u16 a = 1000;
    u32 b = 500000;
    u64 c = 1000000000;

    printf("u16 = %hu\n", a);
    printf("u32 = %u\n", b);
    printf("u64 = %lu\n", c);

    printf("Size of u16 = %lu bytes\n", sizeof(u16));
    printf("Size of u32 = %lu bytes\n", sizeof(u32));
    printf("Size of u64 = %lu bytes\n", sizeof(u64));
    return 0;
}
