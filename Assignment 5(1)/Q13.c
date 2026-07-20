#include <stdio.h>

struct Student
{
    char name[20];
    float marks;
};

int main()
{
    struct Student s[3], temp;
    int i, j;

    for(i = 0; i < 3; i++)
    {
        printf("\nEnter Name and Marks of Student %d: ", i + 1);
        scanf("%s %f", s[i].name, &s[i].marks);
    }

    // Sorting by marks
    for(i = 0; i < 3 - 1; i++)
    {
        for(j = i + 1; j < 3; j++)
        {
            if(s[i].marks > s[j].marks)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nStudents Sorted by Marks:\n");

    for(i = 0; i < 3; i++)
    {
        printf("%s\t%.2f\n", s[i].name, s[i].marks);
    }

    return 0;
}
