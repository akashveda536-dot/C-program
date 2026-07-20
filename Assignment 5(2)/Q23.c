#include <stdio.h>

struct Student
{
    int roll;

    union Data
    {
        int id;
        float marks;
        char grade;
    } info;
};

int main()
{
    struct Student s1;

    s1.roll = 101;
    s1.info.marks = 95.5;

    printf("Roll Number : %d\n", s1.roll);
    printf("Marks       : %.2f\n", s1.info.marks);

    return 0;
}
