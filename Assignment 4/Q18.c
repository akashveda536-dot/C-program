#include <stdio.h>

int findSum(int arr[], int size)
{
    int i, sum = 0;

    for(i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int arr[5];
    int i, sum;
    float average;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    sum = findSum(arr, 5);

    average = (float)sum / 5;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
