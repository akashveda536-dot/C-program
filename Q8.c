#include<stdio.h>
struct student
{
	int id;
	float marks;
};
void modify(struct student s)
{
	s.id=102;
	s.marks=94.5;
}
int main()
{
	struct student s={101,45.5};
	modify(s);
	printf("%d",s.id);
	printf("%f",s.marks);
	return 0;
}

