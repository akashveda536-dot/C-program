#include <stdio.h>

void increment(int *ptr)
{
    (*ptr)++;
}

int main()
{
    int num = 10;

    printf("Before Increment = %d\n", num);

    increment(&num);

    printf("After Increment = %d\n", num);

    return 0;
}
