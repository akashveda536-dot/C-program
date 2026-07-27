/*Write a C program to read a sentence from the user and analyze the string by performing the following operations:

Find the total length of the string.
Count the number of vowels (a, e, i, o, u) in the string.
Count the number of digits (0–9) in the string.
Count the number of spaces in the string.*/

#include<stdio.h>
int main()
{
    char str[100];
    int length=0;
    int vowels=0;
    int digits=0;
    int spaces=0;
printf("Enter the str:");
fgets(str,sizeof(str),stdin);
for(int i=0;str[i]!='\0';i++)
{
    length++;
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
    {
        vowels++;
    }
    if(str[i]>='0'&&str[i]<='9')
    {
        digits++;
    }
    if(str[i]==' ')
    {
        spaces++;
    }
}
    printf("length:%d",length);
    printf("vowels:%d",vowels);
    printf("digits:%d",digits);
    printf("spaces:%d",spaces);
    return 0;
}
