#include <stdio.h>

typedef struct
{
    int roll;
    char name[20];
    float marks;
} Student;
void modify(Student *s)
{
    s->roll = 102;
    s->marks = 98.5;
}

int main()
{
    Student s1;

    printf("Enter Roll Number: ");
    scanf("%d", &s1.roll);

    printf("Enter Name: ");
    scanf("%s", s1.name);

    printf("Enter Marks: ");
    scanf("%f", &s1.marks);
    modify(&s1);

    printf("\n----- Modified Student Details -----\n");
    printf("Roll Number : %d\n", s1.roll);
    printf("Name        : %s\n", s1.name);
    printf("Marks       : %.2f\n", s1.marks);

    return 0;
}
