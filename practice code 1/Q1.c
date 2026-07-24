#include<stdio.h>
int evenodd(int n)
{
	if(n%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n,eonum;
	printf("Enter the N:");
	scanf("%d",&n);
	eonum=evenodd(n);
	if(eonum==1)
	{
		printf("Entered number is even");
	}
	else
	{
		printf("Entered number is odd");
	}
	return 0;
}


	
