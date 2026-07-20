#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year:");
	scanf("%d\n",&year)
		if(year%4 == 0&& year%100 !=0)
			printf("Entered year is a leap year");
		else
			printf("entered year is not a leap year");
	return 0;
}

