#include <stdio.h>
enum Menu
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
    EXIT
};
int main()
{
    int choice;
    int a = 10, b = 5;
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case ADD:
            printf("Addition = %d\n", a + b);
            break;

        case SUBTRACT:
            printf("Subtraction = %d\n", a - b);
            break;

        case MULTIPLY:
            printf("Multiplication = %d\n", a * b);
            break;

        case EXIT:
            printf("Program Exited\n");
            break;

        default:
            printf("Invalid Choice\n");
    }

    return 0;
}
