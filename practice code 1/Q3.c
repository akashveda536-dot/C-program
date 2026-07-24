#include<stdio.h>
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}

int main()
{
	int n,fact;
	printf("Enter the N:");
	scanf("%d",&n);
	fact=factorial(n);
	printf("The factorial is:%d",fact);
	return 0;
}





	



