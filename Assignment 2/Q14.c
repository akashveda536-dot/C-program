#include<stdio.h>
int main()
{
    char a,b;
    int sum;
    printf("Enter first character:");
    scanf("%c",&a);
    printf("Enter second character:");
    scanf("%c",&b);
    sum = a + b;
    printf("Sum of ASCII values=%d\n",sum);
    return 0;
}
