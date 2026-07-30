#include<stdio.h>
struct sensor
{
	int id;
	char name[20];
	int reading;
};
struct sensor findhighest(struct sensor stu[],int n)
{
	struct sensor high=stu[0];
	for(int i=1;i<n;i++)
	{
		if(stu[i].reading>high.reading)
		{
			high=stu[i];
		}
	}
	return high;
}
int main()
{
	int n;
	struct sensor s[20];
	struct sensor high;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the sensor details\n");
	for(int i=0;i<n;i++){
	printf("Enter the id:");
	scanf("%d",&s[i].id);
	printf("Enter the name:");
	scanf("%s",s[i].name);
	printf("Enter the reading:");
	scanf("%d",&s[i].reading);
	}
	high=findhighest(s,n);
	printf("%d,%s,%d",high.id,high.name,high.reading);
	return 0;
}

	
