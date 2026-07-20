#include<stdio.h>
struct car
{
	char model[20];
	int modelno;
};
struct engine
{
	int engineno;
	struct car addr;
};
int main()
{
	struct engine c={234,"honda",1300};
	printf("%s,%d,%d",c.addr.model,c.addr.modelno,c.engineno);
	return 0;
}

