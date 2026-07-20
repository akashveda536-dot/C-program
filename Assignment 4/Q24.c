#include <stdio.h>

int isPalindrome(char str[])
{
    int start = 0;
    int end = 0;

    while(str[end] != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        if(str[start] != str[end])
        {
            return 0;
        }

        start++;
        end--;
    }

    return 1;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if(isPalindrome(str))
    {
        printf("Palindrome String\n");
    }
    else
    {
        printf("Not a Palindrome String\n");
    }

    return 0;
}
