#include<stdio.h>
int main()
{
    float principal,rate,amount;
    int years,i;
    printf("Enter principal amount:");
    scanf("%f",&principal);
    printf("Enter rate:");
    scanf("%f",&rate);
    printf("Enter number of years:");
    scanf("%d",&years);
    amount=principal;
    for (i=1;i<=years;i++)
    {
        amount+=amount*rate/100;
    }
    printf("Compound Amount=%.2f\n",amount);
    printf("Compound Interest=%.2f\n",amount-principal);
    return 0;
}
