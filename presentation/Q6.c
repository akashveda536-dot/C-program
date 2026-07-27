/*Write a C program that reads an unsorted array and performs the following operations:
Sort the array in ascending order.
Check whether the remaining elements form a continuous sequence.
Display the final array and the result.*/

#include<stdio.h>
void sortArray(int arr[],int n)
{
int i,j,temp;
for (i=0;i<n-1;i++)
{
    for (j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int isContinuous(int arr[],int n)
{
    int i;
    for (i=0;i<n-1;i++)
    {
        if (arr[i+1]!=arr[i]+1)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int arr[100];
    int n;
    int i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sortArray(arr,n);
    printf("\nAfter sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    if(isContinuous(arr,n))
    {
        printf("\n\nCONTINUOUS SEQUENCE\n");
    }
    else
    {
        printf("\n\nNOT CONTINUOUS\n");
    }
    return 0;
}
