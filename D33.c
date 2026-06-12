#include<stdio.h>
enum day
{
	monday,
	tuesday,
	wednesday,
	thursday,
	friday,
	saturday,
	sunday
};
int main()
{
	enum day;
	int today;
	enum day today;
	printf("Enter the number:");
	scanf("%d\n",&today);
	if(today==enum day 0)
	printf("you have entered monday");
	else if(today==enum day 1)
	printf("you have entered tuesday");
	else if(today==enum day 2)
	printf("you have entered wednesday");
	else if(today==enum day 3)
	printf("you have entered thursday");
	else if (today==enum day 4)
	printf("you have entered friday");
	else if(today==enum day 5)
	printf("you have entered saturday");
	else if(today==enum day 6)
	printf("you have entered sunday");
	else
	printf("not defined");
	return 0;
}
