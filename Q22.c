#include<stdio.h>
int my_strlen(char str[])
{
	int i=0;
	while(str[i] !='\0')
	{
		i++;
	}
	return i;
}
int main()
{
	char str[100];
	printf("Enter a string:");
	scanf("%s",str);
	printf("length of the string=%d\n",my_strlen(str));
	return 0;
}
