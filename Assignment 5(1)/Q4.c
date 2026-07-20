#include<stdio.h>
struct student
{
	int id;
	float marks;
};
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	int sum=0;
	float avg;
	struct student s[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter student%d details:\n",i+1);
		scanf(" %d,%f",&s[i].id,&s[i].marks);
		sum+=s[i].marks;
	}
	avg=sum/n;
	return 0;
}

