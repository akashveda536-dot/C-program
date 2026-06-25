#include<stdio.h>
struct student 
{
	int id;
	float mark;
};
void mod(struct student *s)
{
	s->id=102;
	s->mark=94.6;
}
int main()
{
	struct student s={101,45.6};
	mod(&s);
	printf("%d\t",s.id);
	printf("%f\t",s.mark);
	return 0;
}
