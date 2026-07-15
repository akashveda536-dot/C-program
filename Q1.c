#include<stdio.h>
typedef struct
{
	char name[20];
	int rollno;
	int mark;
}student;
void printresult(student s)
{
if(s.mark>40)
{
	printf("PASS");
}
else
{
	printf("FAIL");
}
}
int main()
{
	student s;
	printf("Enter the student details\n");
	printf("Enter the name:");
	scanf("%s",s.name);
	printf("Enter the rollno:");
	scanf("%d",&s.rollno);
	printf("Enter the mark:");
	scanf("%d",&s.mark);
	printresult(s);
	return 0;
}


