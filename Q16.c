#include<stdio.h>
void createarray(int arr[],int size)
{
	int i;
	printf("Enter %d elements:\n",size);
	for(i=0;i<size;i++);
	{
		scanf("%d",&arr[i]);
	}
}
int main()
{
	int arr[5];
	createarray(arr,5);
	printf("Array created successfully\n");
	return 0;
}
