#include <stdio.h>

struct Data
{
    int i;
    float f;
    char c;
};

union Data1
{
    int i;
    float f;
    char c;
};

int main()
{
    printf("Size of Structure = %lu bytes\n", sizeof(struct Data));
    printf("Size of Union     = %lu bytes\n", sizeof(union Data1));

    return 0;
}
