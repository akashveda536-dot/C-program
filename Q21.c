#include <stdio.h>

int stringLength(char *ptr)
{
    int length = 0;

    while(*ptr != '\0')
    {
        length++;
        ptr++;
    }

    return length;
}

int main()
{
    char str[100];
    int len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = stringLength(str);

    printf("Length = %d\n", len);

    return 0;
}
