#include<stdio.h>
struct employee
{
	int id;
        char name[20];
	float salary;
};
struct employee employes(struct employee e[],int n)
{
 struct employee high,i,j,temp;
 for(int i=0;i<n-1;i++)
 {
  for(int j=i-1;j<n;j++)
  {
	if(e[i].salary<e[j].salary)
	{
	  temp=e[i];
          e[i]=e[j];
          e[j]=temp;
	}
  }
 
return high;
int main()
{
	int n;
	struct employee e[20];
	struct employee high;
	printf("Enter the size:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter the id:");
		scanf("%d",&e[i].id);
		printf("Enter the name:");
		scanf("%d",e[i].name);
		printf("Enter the salary:");
		scanf("%d",&e[i].salary);
	}	
	high=employes(e,n);
	for(i=0;i<n;i++)
	printf("%d,%s,%f",e[i].id,e[i].name,e[i].salary);
	return 0;
}





	
