#include<stdio.h>
int palindrome(int n)
{
    int remainder,reversed=0; 
    while(n!=0)
    {
        remainder=n%10;
        reversed=reversed*10+remainder;
        n=n/10;
    }
    return reversed;
}
int main()
{
int n;
int reversed=0;
int original;
printf("Enter the number:");
scanf("%d",&n);
original=n;
reversed=palindrome(n);
if(original==reversed)
{
    printf("PALINDROME\n");
}
else
{
    printf("NOT A PALINDROME\n");
}
printf("REVERSED:%d",reversed);
return 0;
}
