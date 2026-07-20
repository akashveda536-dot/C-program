#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;

    ptr = arr;

    printf("Array Elements:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
