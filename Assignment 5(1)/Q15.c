#include <stdio.h>

struct Student
{
    int id;
    char name[20];
    float marks;
};

int main()
{
    struct Student s = {101, "Akash", 85.5};

    struct Student *ptr;

    ptr = &s;

    printf("ID    : %d\n", ptr->id);
    printf("Name  : %s\n", ptr->name);
    printf("Marks : %.2f\n", ptr->marks);

    return 0;
}
