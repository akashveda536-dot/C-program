#include<stdio.h>
int addofsum(int a,int b)
{
	int add;
		add=a+b;
		return add;
}
int main()
{
	int a=20,b=10;
	int add = addofsum(a,b);
	printf("%d",add);
	return 0;
}
