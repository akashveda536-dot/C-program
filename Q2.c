#include <stdio.h>

static int count = 0;    // Shared by functions in this file

void add()
{
    count++;
}

void display()
{
    printf("%d", count);
}

int main()
{
    add();
    add();

    display();

    return 0;
}
