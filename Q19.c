#include <stdio.h>

void reversearray(int arr[], int size)
{
    int i, temp;

    for(i = 0; i < size/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
}

int main()
{
    int arr[5];
    int i;

    printf("Enter any 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    reversearray(arr, 5);

    printf("Reversed array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
