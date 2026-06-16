#include<stdio.h>
int main()
{
	int i;
	float f;
	char c;
	double d;

	printf("size of int   =%zu bytes\n",sizeof(i));
	printf("size of float =%zu bytes\n",sizeof(f));
	printf("size of char  =%zu bytes\n",sizeof(c));
	printf("size of double=%zu bytes\n",sizeof(d));

	return 0;
}
