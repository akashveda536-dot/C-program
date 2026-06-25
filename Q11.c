#include<stdio.h>
#include<time.h>
struct DOB
{
	int day,month,year;
};
struct person   
{
	char name[20];
	struct DOB addr;
};
int main()
{
	struct person p;
	int age;
	printf("Enter name:");
	scanf("%[^\n]",p.name);
	printf("Enter date of birth(DD/MM/YYYY):");
	scanf("%d%d%d",&p.addr.day,&p.addr.month,&p.addr.year);
time_t t=time(NULL);
struct tm*current=localtime(&t);
int currentday=current->tm_mday;
int currentmonth=current->tm_mon+1;
int currentyear=current->tm_year+1900;
age=currentyear-p.addr.year;
if(currentmonth<p.addr.month||(currentday<p.addr.day))
{
	age--;
}
printf("\nPERSON DETAILS\n");
printf("NAME:%s\n",p.name);
printf("DOB:%02d/%02d/%04d\n",p.addr.day,p.addr.month,p.addr.year);
printf("AGE:%d\n",age);
return 0;
}
	 
