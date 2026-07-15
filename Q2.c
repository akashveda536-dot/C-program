#include<stdio.h>
typedef enum
{
	SUNDAY=0,
	MONDAY=1,
	TUESDAY=2,
	WEDNESDAY=3,
	THURSDAY=4,
	FRIDAY=5,
	SATURDAY=6,
} Day;
void checkdaytype(Day d)
{
	if(d==0)
	{
		printf("weekend");
	}
	else
	{
		printf("weekday");
	}
}
int main()
{
	int d;
	printf("Enter the number:");
	scanf("%d",&d);
	checkdaytype(d);
	return 0;
}

