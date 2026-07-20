#include <stdio.h>

/* Creating a typedef for structure */
typedef struct
{
    int roll;
    char name[20];
    float marks;
} Student;

int main()
{
    /* Declaring variable without using struct keyword */
    Student s1;

    s1.roll = 101;
    s1.marks = 95.5;

    printf("Roll No : %d\n", s1.roll);
    printf("Marks   : %.2f\n", s1.marks);

    return 0;
}
	
