#include<stdio.h>
int findpeaks(int a[],int n,int peakindex[])
{
	int count=0,i;
	for(i=1;i<n;i++)
	{
		if((a[i-1]<a[i])&&(a[i+1]<a[i]))
		{
			peakindex[count]=i;
			count++;
		}
	}
	return count;
int main()
{
	int n,a[20],peakindex[20],count;
	printf("Enter the N value:");
	scanf("%d",&n);
	printf("Enter the arr values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	count=findpeaks(a,n,peakindex);
	for(i=0;i<count;i++)
	{
		printf("peak at index %d:%d\n",peakindex[i],a[peakindex[i]]);
	}
	 printf("Total peaks:%d",count);
	 return 0;
}

	
	
	

		


