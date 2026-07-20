#include <stdio.h>

void copyString(char *source, char *destination)
{
    while(*source != '\0')
    {
        *destination = *source;
        source++;
        destination++;
    }

    *destination = '\0';
}

int main()
{
    char str1[100], str2[100];

    printf("Enter a string: ");
    scanf("%s", str1);

    copyString(str1, str2);

    printf("Original String = %s\n", str1);
    printf("Copied String   = %s\n", str2);

    return 0;
}
