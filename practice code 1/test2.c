#include<stdio.h>
int smallest(int arr[],int n)
{
    int greatest=arr[0];
    int smallest=arr[1];
    int temp,largest,second;
    if(second>largest)
    temp=largest;
    largest=second;
    second=temp;
    for(int i=2;i<n;i++)  
    {
        if(arr[i]>largest)
        {
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]>second)
        {
            second=arr[i];
        }
    }
    printf("GREATEST:%d\n",largest);
    printf("SECOND:%d",second);
}
int evenodd(int arr[],int n)
{
    int even=0,odd=0;
    for(int i=0;i<n;i++)
    if(i%2==0)
    {
        even++;
    }
    else
    {
        odd++;
    }
    printf("\nEVEN:%d\n",even);
    printf("ODD:%d\n",odd);
}
int rev(int arr[],int n)
{
    int l=0,r=n-1;
    while(l<r)
    {
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;
    }
    printf("REVERSED ARRAY\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
int main()
{
  int n,arr[20];
  int reverse;
  printf("Enter the size:");
  scanf("%d",&n);
  printf("Enter the array:");
  for(int i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  rev(arr,n);
  evenodd(arr,n);
  smallest(arr,n);
  return 0;
}
