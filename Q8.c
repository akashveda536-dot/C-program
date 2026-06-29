#include <stdio.h>

int main()
{
    int *ptr = NULL;

    if(ptr == NULL)
    {
        printf("Pointer is NULL\n");
        printf("Cannot access any value.\n");
    }
    else
    {
        printf("Value = %d\n", *ptr);
    }

    return 0;
}
