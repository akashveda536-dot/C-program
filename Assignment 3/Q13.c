#include <stdio.h>

int main()
{
    int arr[4] = {1, 2, 3, 4};

    printf("Reversed array: ");

    for(int i = 3; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
