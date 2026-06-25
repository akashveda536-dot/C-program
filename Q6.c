#include<stdio.h>
struct time
{
	int hours;
	int minutes;
	int seconds;
};
int main()
{
	struct time t;
	int totalseconds;

	printf("Enter the hours:");
	scanf("%d",&t.hours);
	printf("Enter the minutes:");
	scanf("%d",&t.minutes);
	printf("Enter the seconds:");
	scanf("%d",&t.seconds);
	totalseconds = (t.hours*3600)+(t.minutes*60)+(t.seconds);
	printf("%d\n",totalseconds);
	return 0;
}


