//Comment Reader
#include<stdio.h>
#include<string.h>

int k=0;
void comment(char e[])
{

	
	char a[100];
	strcpy(a,e);
	int i=2,j=0;
	if(a[0]=='/')
	{
		if(a[1]=='/')
		{
			//printf("This is a comment");
			printf("Comment => %s\n", e);
			for(i=2;i<=100;i++)
			{
				if(a[i]=='*'&&a[i+1]=='/')
				{
					k=0;
					break;
				}
				else
					continue;
			}
		}
		else if(a[1]=='*')
		{
			k=1;
			printf("Comment => %s\n", e);
			for(i=2;i<=100;i++)
			{
				if(a[i]=='*'&&a[i+1]=='/')
				{
					//printf("It is a comment\n");
					printf("Comment => %s\n", e);
					j=1;
					k=0;
					break;
				}
				else
					continue;
			}
			if(j==0)
			{
				//printf("It is not a comment");
			}
		}
		
		else
		{
			//printf("It is not a comment");
		}
	}
	else if(k==1)
	{
		printf("Comment => %s\n", e);
		for(i=0;i<=100;i++)
		{
			if(a[i]=='*'&&a[i+1]=='/')
			{
				k=0;
				break;
			}
		}
	}
	else
		//printf("It is not a comment");

	
return;
}

void main()
{

	FILE *fp;
	
	fp = fopen("sample.c","r");

	char line [ 128 ]; 

	while ( fgets ( line, sizeof line, fp  ) != NULL ) 
        {

		comment(line);
        }

	fclose(fp);
}


/*
	int g=0;
	while(fscanf(fp, "%s", buff)!= EOF)
	{
		
		printf("%s\n", buff );
		g++;
	}
*/

        	//fputs ( line, stdout ); /* write the line */
		//printf("%s\n", line );
