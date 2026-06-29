#include <stdio.h>

struct Student
{
    int id;
    char name[20];
    float marks;
};

void updateStudent(struct Student *ptr)
{
    ptr->id = 102;
    ptr->marks = 95.5;
}

int main()
{
    struct Student s;

    printf("Enter ID: ");
    scanf("%d", &s.id);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\nBefore Update\n");
    printf("ID = %d\n", s.id);
    printf("Name = %s\n", s.name);
    printf("Marks = %.2f\n", s.marks);

    updateStudent(&s);

    printf("\nAfter Update\n");
    printf("ID = %d\n", s.id);
    printf("Name = %s\n", s.name);
    printf("Marks = %.2f\n", s.marks);

    return 0;
}
