#include <stdio.h>
typedef struct
{
    char city[20];
    char state[20];
    int pincode;
} Address;
typedef struct
{
    int roll;
    char name[20];
    float marks;
    Address addr;      
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
    printf("Enter City: ");
    scanf("%s", s1.addr.city);
    printf("Enter State: ");
    scanf("%s", s1.addr.state);

    printf("Enter Pincode: ");
    scanf("%d", &s1.addr.pincode);
    printf("\n----- Student Details -----\n");
    printf("Roll Number : %d\n", s1.roll);
    printf("Name        : %s\n", s1.name);
    printf("Marks       : %.2f\n", s1.marks);
    printf("\n----- Address -----\n");
    printf("City    : %s\n", s1.addr.city);
    printf("State   : %s\n", s1.addr.state);
    printf("Pincode : %d\n", s1.addr.pincode);

    return 0;
}
