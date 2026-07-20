#include <stdio.h>

int square(int num)
{
    return num * num;
}

int main()
{
    int n = 5;

    printf("Square = %d\n", square(n));

    return 0;
}
