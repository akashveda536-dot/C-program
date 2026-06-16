#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any numbers:");
	scanf("%d,%d,%d",&a,&b,&c);
	
	int sum = a+b+c;
	float average = sum /3;

        printf("sum =%d",sum);
	printf("average =%.2f",average);
	return 0;
}

