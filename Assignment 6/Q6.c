#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr;
    int **pptr;

    ptr = &a;
    pptr = &ptr;

    printf("Value of a        = %d\n", a);
    printf("Value using ptr   = %d\n", *ptr);
    printf("Value using pptr  = %d\n", **pptr);

    return 0;
}
