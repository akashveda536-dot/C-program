#include <stdio.h>

void calculate(int a, int b, int *sum, int *diff)
{
    *sum = a + b;
    *diff = a - b;
}

int main()
{
    int num1, num2;
    int sum, diff;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    calculate(num1, num2, &sum, &diff);

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);

    return 0;
}
