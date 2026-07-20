#include <stdio.h>

int len(char s[])
{
    int i;
    for(i = 0; s[i] != '\0'; i++);
    return i;
}

int main()
{
    char s[] = "Hello";
    printf("%d", len(s));
}
