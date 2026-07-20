#include <stdio.h>

typedef struct
{
    int roll;
    char name[20];
    float marks;
} Student;

int main()
{
    Student s[5];
    int i, topper = 0;
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    for(i = 1; i < 5; i++)
    {
        if(s[i].marks > s[topper].marks)
        {
            topper = i;
        }
    }
    printf("\n----- Topper Details -----\n");
    printf("Roll Number : %d\n", s[topper].roll);
    printf("Name        : %s\n", s[topper].name);
    printf("Marks       : %.2f\n", s[topper].marks);

    return 0;
}
