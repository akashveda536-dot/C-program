#include <stdio.h>
typedef struct
{
    int roll;
    char name[20];
    float marks;
} Student;

int main()
{
    Student s1;

    printf("Enter Roll Number: ");
    scanf("%d", &s1.roll);

    printf("Enter Name: ");
    scanf("%s", s1.name);

    printf("Enter Marks: ");
    scanf("%f", &s1.marks);

    printf("\n----- Student Details -----\n");
    printf("Roll Number : %d\n", s1.roll);
    printf("Name        : %s\n", s1.name);
    printf("Marks       : %.2f\n", s1.marks);

    return 0;
}









