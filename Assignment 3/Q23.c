#include <stdio.h>

int compareString(char *str1, char *str2)
{
    while(*str1 != '\0' && *str2 != '\0')
    {
        if(*str1 != *str2)
        {
            return 0;
        }

        str1++;
        str2++;
    }

    if(*str1 == '\0' && *str2 == '\0')
    {
        return 1;
    }

    return 0;
}

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if(compareString(str1, str2))
    {
        printf("Strings are Equal\n");
    }
    else
    {
        printf("Strings are Not Equal\n");
    }

    return 0;
}
