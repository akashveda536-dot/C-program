#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr;
    int i, sum = 0;

    ptr = arr;

    for(i = 0; i < 5; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
