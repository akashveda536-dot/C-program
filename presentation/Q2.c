/*Write a C program to read 5 usernames and search for a username entered by the user.

If the entered username is found:

Display Username found.
Copy the found username into another string using strcpy().
Append "_verified" to the copied username using strcat().
Display the verified username.*/

#include <stdio.h>
#include <string.h>
int main()
{
    char usernames[5][50];
    char search[50];
    char copiedUsername[100];
    int i;
    int found = 0;
    printf("Enter 5 usernames:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%s", usernames[i]);
    }
    printf("\nSearch: ");
    scanf("%s", search);
    for(i = 0; i < 5; i++)
    {
        if(strcmp(usernames[i], search) == 0)
        {
            found = 1;
            printf("\nUsername found\n");
            strcpy(copiedUsername, usernames[i]);
            strcat(copiedUsername, "_verified");
            printf("Verified username: %s\n", copiedUsername);
            break;
        }
    }
    if(found == 0)
    {
        printf("\nUsername not found\n");
    }
    return 0;
}
