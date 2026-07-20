#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;
    int words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    ptr = str;

    while(*ptr != '\0')
    {
        if((*ptr != ' ') &&
           (*(ptr + 1) == ' ' || *(ptr + 1) == '\0' || *(ptr + 1) == '\n'))
        {
            words++;
        }

        ptr++;
    }

    printf("Number of words = %d\n", words);

    return 0;
}
