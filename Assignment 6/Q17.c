#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *p;
    int i;

    p = arr;

    printf("Using *(p+i):\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }

    printf("\n\nUsing p[i]:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }

    printf("\n\nUsing *(i+p):\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", *(i + p));
    }

    return 0;
}
