#include <stdio.h>
union Sensor
{
    int i;
    float f;
};
int main()
{
    union Sensor s;
    unsigned char *ptr;
    int j;
    s.i = 100;

    printf("Integer value = %d\n", s.i);

    ptr = (unsigned char *)&s;

    printf("Raw memory after storing int:\n");
    for(j = 0; j < sizeof(union Sensor); j++)
    {
        printf("%02X ", ptr[j]);
    }

    printf("\n\n");

    s.f = 25.75;

    printf("Float value = %.2f\n", s.f);

    ptr = (unsigned char *)&s;

    printf("Raw memory after storing float:\n");
    for(j = 0; j < sizeof(union Sensor); j++)
    {
        printf("%02X ", ptr[j]);
    }

    printf("\n");

    return 0;
}


