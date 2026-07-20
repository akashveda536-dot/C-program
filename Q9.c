#include <stdio.h>

int main()
{
    int num = 56789;
    int count = 0;

    for(; num != 0; num = num / 10)
    {
        count++;
    }

    printf("Number of digits = %d", count);

    return 0;
}
