#include<stdio.h>
struct data
{
	int i;
	float f;
	char c;
};
union data1
{
	int i;
	float f;
	char c;
};
int main()
{
	printf("size of struct:%lu\n",sizeof(struct data));
	printf("size of union:%lu\n",sizeof(union data1));
	return 0;
}

