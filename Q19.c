#include <stdio.h>

int main()
{
    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    int (*p)[3];
    int i, j;

    p = arr;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", *(*(p + i) + j));
        }
        printf("\n");
    }

    return 0;
}
