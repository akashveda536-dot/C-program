#include <stdio.h>

int sumofDigits(int n)
{
	int digit, sum = 0;
	while(n > 0)
    {
	    digit = n % 10;
	    sum = sum+digit;
	    n = n / 10;
    }
    return sum;
}
int main()
{
    int num, result;
    printf("Enter a number:");
    scanf("%d", &num);
    result = sumofDigits(num);
    printf("Sum of digits = %d\n",result);
    return 0;
}
