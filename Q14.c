#include<stdio.h>
struct student
{
	int id;
	char name[50];
	float marks;
};
int main()
{
	struct student s[3];
int i,searchID,found=0;
	for(i=0;i<3;i++)
        {
	 printf("\nEnter ID,name,marks of student%d:",i+1);
	 scanf("%d%s%f",&s[i].id,s[i].name,&s[i].marks);
        }
printf("\nEnter ID to Search:");
scanf("%d",&searchID);
for(i=0;i<3;i++)
{
	if(s[i].id==searchID)
	{
		printf("\nstudent found!\n");
		printf("ID:%d\n",s[i].id);
		printf("name:%s\n",s[i].name);
		printf("marks:%f\n",s[i].marks);

		found=1;
		break;
	}
}
if (found ==0)
{
	printf("student id not found");
}
return 0;

