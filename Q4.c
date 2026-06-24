#include <stdio.h>

int isEven(int num)
{
    if (num % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isEven(n))
        printf("Even Number\n");
    else
        printf("Odd Number\n");

    return 0;
}
