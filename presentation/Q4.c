/*Write a C program to read an array and:
Find the maximum element.
Find the minimum element.
Calculate the sum and average.
Count even and odd numbers.*/

#include <stdio.h>
int main()
{
    int arr[100];
    int n;
    int max, min;
    int sum = 0;
    int evenCount = 0;
    int oddCount = 0;
    float average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i=0;i < n;i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (int i=0;i < n;i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
        sum = sum + arr[i];
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    average = (float)sum /n;
    printf("\nMaximum: %d",max);
    printf("\nMinimum: %d",min);
    printf("\nSum: %d",sum);
    printf("\nAverage: %.1f",average);
    printf("\nEven count: %d",evenCount);
    printf("\nOdd count: %d",oddCount);
    return 0;
}
