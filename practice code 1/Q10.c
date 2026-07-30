#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	float mark;
};
void input(struct student s[],int n)
{
	printf("\nEnter the student details\n");
	for(int i=0;i<n;i++)
	{
		printf("Enter the rollno:");
		scanf("%d",&s[i].rollno);
		printf("Enter the name:");
		scanf("%s",s[i].name);
		printf("Enter the mark:");
		scanf("%f",&s[i].mark);
	}
}
void display(struct student s[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nSTUDENT DETAILS\n");
		printf("ROLLNO:%d",s[i].rollno);
		printf("NAME:%s",s[i].name);
		printf("MARK:%f",s[i].mark);
	}
}
void findhigh(struct student s[],int n)
{
	int max=0;
	for(int i=1;i<n;i++)
	{
		if(s[max].mark<s[i].mark)
		{
			max=i;
		}
	}
		printf("\nSTUDENT DETAILS\n");
		{
			printf("rollno:%d\n",s[max].rollno);
			printf("name:%s\n",s[max].name);
			printf("mark:%f\n",s[max].mark);
		}
}
void findaverage(struct student s[],int n)
{
	float sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=s[i].mark;
	}
	float average=sum/n;
	printf("Average:%f",average);
}  
int main()
{
	struct student s[20];
	int n;
	printf("Enter the size:");
	scanf("%d",&n);
	input(s,n);
	display(s,n);
	findhigh(s,n);
	findaverage(s,n);
	return 0;
}






