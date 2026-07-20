#include <stdio.h>

struct Student
{
    int id;
    char name[20];
    float marks;
};

int main()
{
    struct Student s[3] =
    {
        {101, "Akash", 85.5},
        {102, "Rahul", 90.0},
        {103, "Kiran", 78.5}
    };

    struct Student *ptr[3];

    int i;

    // Store addresses
    for(i = 0; i < 3; i++)
    {
        ptr[i] = &s[i];
    }

    // Print using pointers
    for(i = 0; i < 3; i++)
    {
        printf("Student %d\n", i + 1);
        printf("ID    : %d\n", ptr[i]->id);
        printf("Name  : %s\n", ptr[i]->name);
        printf("Marks : %.1f\n\n", ptr[i]->marks);
    }

    return 0;
}
