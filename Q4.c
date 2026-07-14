#include <stdio.h>

static int s = 10;   // Static variable

int main()
{
    int a = 20;       // Stack variable

    printf("Address of static variable : %p\n", (void *)&s);
    printf("Address of stack variable  : %p\n", (void *)&a);

    return 0;
}
