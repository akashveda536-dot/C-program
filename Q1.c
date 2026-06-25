#include<stdio.h>
struct student
{
	int id;
	char name[20];
	float marks;
};
int main()
{
	struct student s2={101,"Akash",85.5};
	struct student s1={102,"rash",56.7};
	struct student s3={103,"name",76.5};
	printf("%d,%s,%.1f\n",s1.id,s1.name,s1.marks);
	printf("%d,%s,%.1f\n",s2.id,s2.name,s2.marks);
	printf("%d,%s,%.1f\n",s3.id,s3.name,s3.marks);
	return 0;
}

