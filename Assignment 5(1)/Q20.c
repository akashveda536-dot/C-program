#include<stdio.h>
struct student 
{
	int id;
	union data
	{
		float marks;
		char grade;
	}info;
};
int main()
{
	struct student s;
       	s.id= 101;
        s.info.marks= 65.8;
	printf("student details\n");
	printf("id:%d\n",s.id);
	printf("marks:%f\n",s.info.marks);
        s.info.grade='A';
	printf("After declaring the character\n");
	printf("id:%d\n",s.id);
	printf("grade:%c\n",s.info.grade);
        return 0;
}


