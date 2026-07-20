#include <stdio.h>

typedef struct
{
    int roll;
    char name[20];
    float marks;
} Student
void display(Student s)
{
    printf("\n----- Student Details -----\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);
    printf("Marks       : %.2f\n", s.marks);
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

    display(s1);

    return 0;
}
