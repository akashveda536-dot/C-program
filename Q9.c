#include<stdio.h>
struct address
{
	int id;
	int pincode;
};
struct student
{
	char name[20];
	float mark;
	struct address addr;
};
int main()
{
	struct student s;
	printf("name:%s",s.name);
	scanf("%s",s.name);
	printf("mark:");
	scanf("%f",&s.mark);
	printf("id:");
	scanf("%d",&s.addr.id);
	printf("pincode:");
	scanf("%d",&s.addr.pincode);
	printf("%s\n,%f\n,%d\n,%d\n",s.name,s.mark,s.addr.id,s.addr.pincode);
	return 0;
}
