#include<stdio.h>
#include<string.h>

void main()
{
	/* code */
	int j=0;
	char string[50];

	printf("Enter the String : ");
	scanf("%s",string);

	printf("Input : %s \n",string);

/*
	switch(string)
	{
		case "aa":j=1;
			break;
		case "abb":j=1;
			break;
		default:

			break;
	}*/

	if(j==1)
	{
		printf("String is Accepted\n");
	}
	//return 0;
}