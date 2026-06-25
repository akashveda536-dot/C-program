#include<stdio.h>

struct student
{
	int id;
	char name[20];
	float marks;
};
void studentdetails(struct student s)
{
	printf("ID:%d\n",s.id);
	printf("name:%s\n",s.name);
	printf("marks:%f\n",s.marks);
}
int main()
{
	struct student s;
	printf("Enter ID:");
	scanf("%d",&s.id);
	printf("Enter name:");
	scanf("%s",s.name);
	printf("Enter marks:");
	scanf("%f",&s.marks);
	studentdetails(s);
	return 0;
}
