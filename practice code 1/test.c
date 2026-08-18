#include <stdio.h>
void inputArray(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
int findSecondLargest(int arr[], int n)
{
    int largest=arr[0];
    int second=-1;
    int i;
    for(i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<largest)
        {
            if(second==-1 || arr[i]>second)
            {
                second=arr[i];
            }
        }
    }
    return second;
}
void reverseArray(int arr[], int n)
{
    int i,temp;
    for(i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
}
void countEvenOdd(int arr[], int n, int *even, int *odd)
{
    int i;
    *even=0;
    *odd=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            (*even)++;
        }
        else
        {
            (*odd)++;
        }
    }
}
int main()
{
    int arr[10];
    int n;
    int secondLargest;
    int even,odd;
    int i;
    printf("Enter N: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    inputArray(arr,n);
    secondLargest=findSecondLargest(arr,n);
    if(secondLargest==-1)
    {
        printf("2nd Largest : No 2nd Largest exists\n");
    }
    else
    {
        printf("2nd Largest : %d\n",secondLargest);
    }
    reverseArray(arr,n);
    printf("Reversed : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    countEvenOdd(arr,n,&even,&odd);
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    return 0;
}
