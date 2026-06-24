#include<stdio.h>
int findmax(int arr[],int size)
{
	int i,max;
	max=arr[0];
	for(i=1;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}
int main()
{
	int arr[5];
	int i,max;
	printf("Enter 5 elements:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=findmax(arr,5);
	printf("maximum element =%d\n",max);
	return 0;
}

