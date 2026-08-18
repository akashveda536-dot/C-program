#include<stdio.h>
#include<string.h>
void word(char str[])
{
	int wordcount=0;
	for(int i=0;str[i]!=' ';i++)
	{
		wordcount++;
	}
	printf("word count:%d",wordcount);
}
void toggle(char str[])
{
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        str[i]=str[i]+32;
        else if(str[i]>='a'&&str[i]<='z')
        str[i]=str[i]-32;
    }
    printf("MODIFIED STRING:%s",str);
}
int main()
{
    char str[100];
    printf("Enter the string or sentence:");
    fgets(str,sizeof(str),stdin);
    toggle(str);
    word(str);
    return 0;
}
