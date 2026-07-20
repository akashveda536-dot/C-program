#include <stdio.h>

int findMax(int *ptr, int size)
{
    int i;
    int max = *ptr;

    for(i = 1; i < size; i++)
    {
        if(*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
    }

    return max;
}

int main()
{
    int arr[] = {25, 10, 45, 30, 15};
    int size;
    int max;

    size = sizeof(arr) / sizeof(arr[0]);

    max = findMax(arr, size);

    printf("Maximum Element = %d\n", max);

    return 0;
}
