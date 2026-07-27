/*Write a C program to modify an array by performing the following operations:
Remove all duplicate elements.
Move all zeroes to the end.
Maintain the relative order of the remaining elements.*/

#include <stdio.h>
void removeDuplicates(int arr[],int *n)
{
    for (int i=0;i<*n;i++)
    {
        for (int j=i+1;j<*n;j++)
        {
            if (arr[i]==arr[j])
            {
                for (int k=j;k<*n-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                (*n)--;
                j--;
            }
        }
    }
}
void moveZeroesToEnd(int arr[],int n)
{
    int i;
    int index = 0;
    for (i=0;i<n;i++)
    {
        if (arr[i]!=0)
        {
            arr[index]=arr[i];
            index++;
        }
    }
    while (index<n)
    {
        arr[index]=0;
        index++;
    }
}
int main()
{
    int arr[100];
    int n;
    int i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    removeDuplicates(arr,&n);
    moveZeroesToEnd(arr,n);
    printf("\nModified array:\n");
    for (i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
