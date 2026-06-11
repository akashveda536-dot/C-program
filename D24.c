#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	if(a==2)
	{
		printf("Entered number is two");
	}
	else if(a<=2)
	{
		printf("Entered number is less than two");
	}
	else
	{
		printf("Entered  number is greater than two");
	}
	return 0;
}
