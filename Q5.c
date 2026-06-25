#include<stdio.h>
struct date
{
	int day;
	char month[20];
	int year;
};
int main()
{
	struct date s={01,"january",2012};
	printf("%d/%s/%d",s.day,s.month,s.year);
	return 0;
}
