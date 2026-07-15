#include<stdio.h>
typedef struct
{
	char name[20];
	float price;
	int qty;
}product;
int findmostexpensive(product s[],int n)
{
	int max=0,i=0;
	for(i=0;i<n;i++)
	{
		if(s[i].price>s[max].price)
		{
			max=i;
		}
	}
	return max;
}
int main()
{
	int n,max=0,i=0;
	product s[10];
	printf("Enter the n value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the name:");
		scanf("%s",s[i].name);
		printf("Enter the price:");
		scanf("%f",&s[i].price);
		printf("Enter the qty:");
		scanf("%d",&s[i].qty);
	}

	max=findmostexpensive(s,n);
		printf("More expensive product:\n");
		printf("%s%f%d",s[max].name,s[max].price,s[max].qty);
		return 0;
}


