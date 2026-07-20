#include<stdio.h>
int mystrcpy(char source[],char destination[])
{
int i=0;
while(source[i] !='\0')
{
	destination[i]=source[i];
	i++;
}
destination[i]='\0';
}
int main()
{
	char source[100];
	char destination[100];
	printf("Enter a string:");
	scanf("%s",source);
	mystrcpy(source,destination);
	printf("copied string =%s\n",destination);
	return 0;
}
