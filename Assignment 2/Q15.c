#include<stdio.h>
struct Student
{
    int id;
    float marks;
    char grade;
    double percentage;
};
int main()
{
    printf("Size of structure=%zu bytes\n",sizeof(struct Student));
    return 0;
}
