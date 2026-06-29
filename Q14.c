#include <stdio.h>

void reverseNumber(int *num)
{
    int rev = 0;
    int temp = *num;

    while(temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    *num = rev;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Before Reverse = %d\n", number);

    reverseNumber(&number);

    printf("After Reverse = %d\n", number);

    return 0;
}
