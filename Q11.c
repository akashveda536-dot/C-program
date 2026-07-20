#include <stdio.h>

int main()
{
    int arr[10] = {12, 45, 7, 89, 23, 56, 34, 90, 11, 67};
    int largest = arr[0];

    for(int i = 1; i < 10; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("Largest element = %d", largest);

    return 0;
}
