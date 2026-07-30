#include<stdio.h>
void reversearray(int arr[],int n)
{
	int temp;
	for(int i=0;i<n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
	}
}
int main()
{
	int n;
	printf("Enter the size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	reversearray(arr,n);
	printf("\nREVERSED ARRAY\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;

}


