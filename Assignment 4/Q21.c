#include<stdio.h>
int searchElement(int arr[],int size,int key)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[]={10,20,30,40,50};
	int size=5;
	int key,index;
	printf("Enter element to search:");
	scanf("%d",&key);
	index=searchElement(arr,size,key);
	if(index !=-1)
		printf("Element found at index %d\n",index);
	else 
		printf("Element not found\n");
	return 0;
}
