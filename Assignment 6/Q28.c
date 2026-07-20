#include <stdio.h>

struct Student
{
    int id;
    char name[20];
    float marks;
};

int main()
{
    struct Student s1 = {101, "Akash", 85.5};
    struct Student s2 = {102, "Rahul", 90.0};
    struct Student s3 = {103, "Kiran", 88.5};

    struct Student *ptr[3];

    ptr[0] = &s1;
    ptr[1] = &s2;
    ptr[2] = &s3;

    int i;

    for(i = 0; i < 3; i++)
    {
        printf("Student %d\n", i + 1);
        printf("ID = %d\n", ptr[i]->id);
        printf("Name = %s\n", ptr[i]->name);
        printf("Marks = %.2f\n\n", ptr[i]->marks);
    }

    return 0;
}
