#include <stdio.h>

int main()
{
    int a;
    int *ptr;

    ptr = &a;

    *ptr = 25;

    printf("Value of a = %d\n", a);
    printf("Value using pointer = %d\n", *ptr);

    return 0;
}
