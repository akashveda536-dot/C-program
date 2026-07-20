#include<stdio.h>
union data
{
	int i;
	float f;
	char c;
};
int main()
{
	union data d;
	d.i=100;
	printf("After assigning int:\n");
	printf("i=%d\n",d.i);
	printf("f=%f\n",d.f);
	printf("c=%c\n\n",d.c);
	d.f=25.5;
	printf("After assigning float:\n");
	printf("i=%d\n",d.i);
	printf("f=%f\n",d.f);
	printf("c=%c\n\n",d.c);
	d.c='A';
	printf("After assigning char:\n");
	printf("i=%d\n",d.i);
	printf("f=%f\n",d.f);
	printf("c=%c\n\n",d.c);
	return 0;
}

