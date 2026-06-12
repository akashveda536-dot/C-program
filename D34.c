#include<stdio.h>
enum day
{
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY,
	SUNDAY,
};
 int main()
{
	enum day today = FRIDAY;
	rintf("%d\n",today);
	return 0;
}
	
