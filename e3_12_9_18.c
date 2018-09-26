//Identifier
#include<stdio.h>
#include<string.h>

void main()
{
	char id[50];
	int i=1,l=0;
	printf("Enter a String\n");
	gets(id);
	//printf("\n**%s**\n",id);

	/*while (id[i] != '\0') {
        	printf("%c", id[i]);
        	i++;
        }
	i=1;*/

	if(isalpha(id[0])||id[0]=='_')
	{
		//printf("\nfirst condition satisfied %c\n",id[0]);
	
		while(id[i]!='\0')
		{
			if(isalpha(id[i])||id[i]=='_'||isdigit(id[i]))
			{
				//printf("second condition satisfied %c\n",id[i]);
				i++;
			}
			else
			{
				//printf("second condition Failed %c\n",id[i]);
				l=1;
				break;
			}
		}

	}
	else
	{
		l=1;
		//printf("first condition Failed\n");
	}
	
	if(l==0)
	{
		printf("It is an identifier\n");
	}
	else
	{
		printf("It is not an identifier\n");
	}
}
