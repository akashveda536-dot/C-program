#include <stdio.h>

int main()
{
    int a = 10, b = 5;
    char op = '+';

    switch(op)
    {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            printf("Result = %d", a / b);
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}
