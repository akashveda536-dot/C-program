#include<stdio.h>

struct student 
{
	char grade;
	int rollno;
	float marks;
};
int main()
{
	struct student s;
	printf("size of char  =%zu bytes\n",sizeof(char));
	printf("size of int   =%zu bytes\n",sizeof(int));
	printf("size of float =%zu bytes\n",sizeof(float));
   
	printf("size of structure = %zu bytes\n",sizeof(s));

	return 0;
}




