#include <stdio.h>

void divide(int a, int b, int *quotient, int *remainder)
{
    *quotient = a / b;
    *remainder = a % b;
}

int main()
{
    int num1, num2;
    int quotient, remainder;

    printf("Enter dividend and divisor: ");
    scanf("%d %d", &num1, &num2);

    divide(num1, num2, &quotient, &remainder);

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}
