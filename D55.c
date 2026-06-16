#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter first value:");
	scanf("%d",&a);
        printf("Enter second value:");
	scanf("%d",&b);

        printf("Before swapping");
        printf("A:%d\n",a);
        printf("B:%d\n",b);

        temp = a;
        a = b;
        b = temp;

        printf("After swapping\n");
        printf("A:%d\n",a);
        printf("B:%d\n",b);
        return 0;
}	
