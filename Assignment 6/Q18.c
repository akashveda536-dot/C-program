#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30};
    int *p;

    p = arr;

    printf("Initial Value = %d\n", *p);

    p++;
    printf("After p++ = %d\n", *p);

    p = arr;

    (*p)++;
    printf("After (*p)++ = %d\n", *p);

    printf("First element of array = %d\n", arr[0]);

    return 0;
}
