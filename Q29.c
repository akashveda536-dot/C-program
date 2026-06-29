#include <stdio.h>

int main()
{
    int arr[] = {25, 10, 45, 5, 30};
    int *ptr;
    int i, size;
    int smallest, largest;

    ptr = arr;
    size = sizeof(arr) / sizeof(arr[0]);

    smallest = *ptr;
    largest = *ptr;

    for(i = 1; i < size; i++)
    {
        ptr++;

        if(*ptr < smallest)
        {
            smallest = *ptr;
        }

        if(*ptr > largest)
        {
            largest = *ptr;
        }
    }

    printf("Smallest Element = %d\n", smallest);
    printf("Largest Element = %d\n", largest);

    return 0;
}
