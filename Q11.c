#include <stdio.h>

void printArray(int *ptr, int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size;

    size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);

    return 0;
}
