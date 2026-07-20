#include <stdio.h>

enum ErrorCode
{
    SUCCESS = 0,
    FILE_NOT_FOUND,
    INVALID_INPUT,
    MEMORY_ERROR
};

int main()
{
    enum ErrorCode error;

    error = INVALID_INPUT;

    switch(error)
    {
        case SUCCESS:
            printf("Success\n");
            break;

        case FILE_NOT_FOUND:
            printf("Error: File Not Found\n");
            break;

        case INVALID_INPUT:
            printf("Error: Invalid Input\n");
            break;

        case MEMORY_ERROR:
            printf("Error: Memory Allocation Failed\n");
            break;

        default:
            printf("Unknown Error\n");
    }

    return 0;
}
