#include <stdio.h>

int main()
{
    char s[] = "madam";
    int i, l = 0, f = 1;

    while(s[l]) l++;

    for(i = 0; i < l/2; i++)
        if(s[i] != s[l-1-i])
            f = 0;

    printf(f ? "Palindrome" : "Not Palindrome");
}
