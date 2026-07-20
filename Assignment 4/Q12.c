#include<stdio.h>
int reversenumber(int n)
{
	int digit,reverse =0;
	while(n>0)
	{
		digit =n%10;
		reverse=reverse*10+digit;
		n=n/10;
	}
	return reverse;
}
int main()
{
	int num,result;
	printf("Enter a number:");
	scanf("%d",&num);
	result = reversenumber(num);
	printf("Reversed number=%d\n",result);
	return 0;
}
