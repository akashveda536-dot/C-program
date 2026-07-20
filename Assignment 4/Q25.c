#include<stdio.h>
void countcharacter(char str[])
{
	int i=0;
	int vowels=0,consonants=0,digits=0,space=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
	        {
			vowels++;
		}
		else if((str[i]=='a'&&str[i]=='z')||(str[i]=='A'&&str[i]=='Z'))
		{
			consonants++;
		}
		else if(str[i]>='0'&& str[i]<='9')
		{
			digits++;
		}
		else if(str[i]==' ')
		{
			space++;
		}
		i++;
	}

		printf("vowels= %d\n",vowels);
		printf("constants= %d\n",consonants);
		printf("digits = %d\n",digits);
		printf("space= %d\n",space);
}
	int main()
	{
		char str[100];

		printf("Enter a string:");
		fgets(str,sizeof(str),stdin);
                countcharacter(str);
		return 0;
	}

