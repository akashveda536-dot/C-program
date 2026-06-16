#include<stdio.h>
int main()
{
	char a,b;
	printf("Enter a charcter:");
	scanf("%c",&a);
	printf("Enter a character:");
	scanf("%c",&b);
	char c = a+b;
	printf("The addition of this characters:%d",c);
	return 0;
}
