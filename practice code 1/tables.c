#include <stdio.h>
int main()
{
    int n;
    int fact;
    printf("Enter the number for tables:");
    scanf("%d",&n);
    for(int i=1;i<=20;i++)
    {
        fact=n*i;
        printf("%d*%d=%d\n",n,i,fact);
    }
    return 0;
}
