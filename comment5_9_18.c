//Comment Reader
#include<stdio.h>
#include<string.h>

void comment(char e[])
{

	
	char a[100];
	strcpy(a,e);
	int i=2,j=0;
	if(a[0]=='/')
	{
		if(a[1]=='/')
		{
			printf("This is a comment");
		}
		else if(a[1]=='*')
		{
			for(i=2;i<=100;i++)
			{
				if(a[i]=='*'&&a[i+1]=='/')
				{
					printf("It is a comment\n");
					j=1;
					break;
				}
				else
					continue;
			}
			if(j==0)
			{
				printf("It is not a comment");
			}
		}
		else
		{
			printf("It is not a comment");
		}
	}
	else
		printf("It is not a comment");

return;
}

void main()
{

	char line [ 128 ]; 

	printf("Enter the line");
	gets(line);
	comment(line);
	
}



