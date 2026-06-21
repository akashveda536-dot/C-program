#include <stdio.h>

int main()
{
    int N, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}
