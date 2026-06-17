#include<stdio.h>
int main()
{
	int a,b;

	printf("Enter one numbers:");
	scanf("%d",&a);
	printf("Enter second numbers:");
	scanf("%d",&b);

	printf("\nBefore swapping:\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);

	a = a^b;
	b = a^b;
	a = a^b;

	printf("\nAfter swapping:\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);

	return 0;
}
