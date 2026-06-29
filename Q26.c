#include <stdio.h>

struct Student
{
    int id;
    char name[20];
    float marks;
};

int main()
{
    struct Student s;
    struct Student *ptr;

    ptr = &s;

    printf("Enter ID: ");
    scanf("%d", &ptr->id);

    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    printf("\nStudent Details\n");
    printf("ID = %d\n", ptr->id);
    printf("Name = %s\n", ptr->name);
    printf("Marks = %.2f\n", ptr->marks);

    return 0;
}
