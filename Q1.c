#include <stdio.h>

void trackMe()
{
    static int count = 0;
    count++;

    printf("I have been called %d times\n", count);
}

int main()
{
    trackMe();
    trackMe();
    trackMe();

    return 0;
}
