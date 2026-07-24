#include <stdio.h>
void found(int arr[],int n,int target)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr[i]+arr[j]==target)
            {
                printf("[%d,%d]",i,j);
                return;
            }
        }
    }
    printf("Not found");
}
int main()
{
    int n, target, arr[20];      
    printf("Enter the N: ");
    scanf("%d", &n);
    printf("Enter the arr: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target: ");
    scanf("%d", &target);
    found(arr, n, target);
    return 0;
}
