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

    d.i = 100;
    printf("After assigning int:\n");
    printf("i = %d\n", d.i);

    d.f = 25.5;
    printf("\nAfter assigning float:\n");
    printf("f = %.2f\n", d.f);

    d.c = 'A';
    printf("\nAfter assigning char:\n");
    printf("c = %c\n", d.c);

    printf("\nSize of union = %lu bytes\n", sizeof(union Data));

    return 0;
}
