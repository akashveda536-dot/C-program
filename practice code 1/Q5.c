#include<stdio.h>
void findminmax(int arr[],int n,int *min,int *max)
{
	int *p;
	p=arr;
	*max=*p;
	*min=*p;
	for(int i=1;i<n;i++)
	{
		if(*(p+i)>*max)
		{
			*max=*(p+i);
		}
		if(*(p+i)<*min)
		{
			*min=*(p+i);
		}
	}
}
int main()
{
	int arr[]={23,5,67,12,9};
	int n=5;
	int max,min;
	findminmax(arr,n,&min,&max);
	printf("The maximum is:%d",max);
	printf("The minimum is:%d",min);
	return 0;
}


