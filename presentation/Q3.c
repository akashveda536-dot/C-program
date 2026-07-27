/*Write a C program to read a sentence and perform the following operations:

Remove all spaces and non-alphabetic characters from the sentence.
Convert all uppercase letters to lowercase.
Create a modified string using the remaining characters.
Check whether the modified string is a palindrome.
Display both the original string and the modified string.
Display whether the modified string is a Palindrome or Not a Palindrome.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    char modified[100];
    int j = 0;
    int palindrome = 1;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(isalpha(str[i]))
        {
            modified[j] = tolower(str[i]);
            j++;
        }
    }
    modified[j] = '\0';
    int left = 0;
    int right = strlen(modified) - 1;
    while(left < right)
    {
        if(modified[left] != modified[right])
        {
            palindrome = 0;
            break;
        }
        left++;
        right--;
    }
    printf("\nOriginal string: %s", str);
    printf("Modified string: %s\n", modified);
    if(palindrome == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
    return 0;
}
