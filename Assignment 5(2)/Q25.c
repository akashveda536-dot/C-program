#include <stdio.h>

union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    union Data d;
    unsigned char *ptr;
    int j;

    d.i = 100;

    ptr = (unsigned char *)&d;

    printf("Integer Value = %d\n", d.i);
    printf("Raw Memory:\n");

    for(j = 0; j < sizeof(union Data); j++)
    {
        printf("%02X ", ptr[j]);
    }

    printf("\n");

    return 0;
}
