#include <stdio.h>

int reverseNumber(int n)
{
    int digit, reverse = 0;

    while(n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    return reverse;
}

int isPalindrome(int n)
{
    if(n == reverseNumber(n))
    {
        return 1;
    }

    return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPalindrome(num))
    {
        printf("%d is a Palindrome Number\n", num);
    }
    else
    {
        printf("%d is Not a Palindrome Number\n", num);
    }

    return 0;
}
