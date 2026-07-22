#include<stdio.h>
long power(int base,int exp)
{
    long result=1;
    for(int i=1;i<=exp;i++)
    {
        result=result*base;
    }
    return result;
}
int isArmstrong(int n)
{
    int temp,digit,digits=0;
    long sum=0;
    temp=n;
    while(temp>0)
    {
        digits++;
        temp=temp/10;
    }
    temp=n;
    while(temp>0)
    {
        digit = temp%10;
	sum = sum+power(digit,digits);
	temp = temp/10;
    }
    if(sum==n)
        return   1;
    else
        return 0;
}
int main()
{
    int n;
    int count=0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    if(isArmstrong(n))
        printf("Result:ARMSTRONG\n");
    else
        printf("Result:NOT ARMSTRONG\n");
    printf("\n3-digit Armstrong numbers:\n");
    for(int i=100;i<=999;i++)
    {
        if(isArmstrong(i))
        {
            printf("%d",i);
            count++;
        }
    }
    printf("\nTotal count:%d\n",count);
    return 0;
}











