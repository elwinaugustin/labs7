//Pattern
#include<stdio.h>
#include<string.h>


void main()
{
	char id[50];
	int i=0,j=0,l=0,m=0,n=0,o=0,t=0;
	printf("Enter a String\n");
	gets(id);
	
	while(id[j]!='\0'||id[j]=='a'||id[j]=='b')
	{

		if(id[0]=='a')
		{	
			if(id[1]=='a')
			{	
				l++;
			}			
		}


		if(strcmp(id,"abb")||strlen(id)==strlen("abb"))
		{	
			n++;
		}

		if(n==0)
		{



			i=0;
			while(id[i]!='\0')
			{
				if(id[0]=='b')
				{	t=1;
					while(id[i]!='\0')
					{
						if(id[i]=='a')
						{
						//false
							o=1;
						}
						i++;
					}
				}
				if(id[0]=='a')
				{	
					while(id[i]!='\0')
					{
						if(id[i]=='b')
						{	t=1;
							while(id[i]!='\0')
							{
								if(id[i]=='a')
								{
								//false
									o=1;
								}
								i++;
							}
						}
						i++;
					}
				}

			}


			i++;
		}


		
		j++;
	}

	if(o==0&&t==1)
	{
		m++;
	}


	if(l!=0||n!=0||m!=0)
	{
		printf("String is Accepted \n");
	}
	else
	{
		printf("String is not recognized \n");
	}
/*
	if(l!=0)
	{
		printf("Pattern aa appeared %d times\n",l);
	}
	else
	{
		printf("Pattern aa is not present\n");
	}

	if(m!=0)
	{
		printf("Pattern a*b+ appeared %d times\n",m);
	}
	else
	{
		printf("Pattern a*b+ is not present\n");
	}

	if(n!=0)
	{
		printf("Pattern abb appeared %d times\n",n);
	}
	else
	{
		printf("Pattern abb is not present\n");
	}
	*/

}	