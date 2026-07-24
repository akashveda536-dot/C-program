#include<stdio.h>
int largest(int a,int b,int c)
{
	if(a>b&&a>c)
		return 2;
	else if(b>c&&b>a)
		return 1;
	else if(c>a&&c>b)
		return 0;
}
int main()
{
	int a,b,c,large;
	printf("Enter the number for A,B,C:");
	scanf("%d%d%d",&a,&b,&c);
	large=largest(a,b,c);
	if(large==2)
		printf("A is greater:%d",a);
	else if(large==1)
		printf("B is greater:%d",b);
	else if(large==0)
		printf("C is greater:%d",c);
	return 0;
}

	

