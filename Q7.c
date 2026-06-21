#include <stdio.h>

int main()
{
    int num = 121;
    int original = num;
    int reverse = 0, rem;

    for(; num != 0; num = num / 10)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
    }

    if(original == reverse)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
