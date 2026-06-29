#include <stdio.h>

void modify(int *ptr)
{
    *ptr = 50;
}

int main()
{
    int x = 10;

    printf("Before Function Call:\n");
    printf("x = %d\n", x);

    modify(&x);

    printf("\nAfter Function Call:\n");
    printf("x = %d\n", x);

    return 0;
}
