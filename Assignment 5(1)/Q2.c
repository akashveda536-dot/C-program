#include<stdio.h>
struct student
{
	int id;
	char name[20];
	float marks;
};
int main()
{
	struct student s1={101,"namea",76.5};
	struct student s2={102,"nameb",63.5};
	struct student s3={103,"namec",83.5};
	struct student s4={104,"named",53.5};
	struct student s5={105,"namef",93.5};

	printf("%d,%s,%.1f\n",s1.id,s1.name,s1.marks);
	printf("%d,%s,%.1f\n",s2.id,s2.name,s2.marks);
	printf("%d,%s,%.1f\n",s3.id,s3.name,s3.marks);
	printf("%d,%s,%.1f\n",s4.id,s4.name,s4.marks);
	printf("%d,%s,%.1f\n",s5.id,s5.name,s5.marks);
	return 0;
}
         
