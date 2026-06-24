#include<stdio.h>
void inputArray(int arr[],int size)
{
	int i;
	printf("Enter %d elements:\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
}
int main()
{
	int arr[5];
	inputArray(arr,5);
	printf("Array elements are:\n");
	for(int i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
