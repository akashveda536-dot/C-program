#include <stdio.h>

int countVowels(char *ptr)
{
    int count = 0;

    while(*ptr != '\0')
    {
        if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' ||
           *ptr == 'o' || *ptr == 'u' ||
           *ptr == 'A' || *ptr == 'E' || *ptr == 'I' ||
           *ptr == 'O' || *ptr == 'U')
        {
            count++;
        }

        ptr++;
    }

    return count;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Number of vowels = %d\n", countVowels(str));

    return 0;
}
