//Lexical Analyzer
#include<stdio.h>
#include<string.h>

void file()
{
	
}

void main()
{	

	char ch,keywords[7][7]={"int","void","main","printf","include"};//, symbols[]={,;{}()#<>.}, operators[]={+-*/=<>%!};
	file();
	
	printf("----before file----\n\n");

	FILE *fp;
	char buff[500],f[200][200];

	printf("----1----\n\n");

	fp = fopen("sample.c","r");
	printf("----2----\n\n");
	/*int g=0;
	while(fscanf(fp, "%s", buff)!= EOF)
	{
		
		printf("%s\n", buff );
		
		//f[0][g]=buff;
		//strcpy(f[0][g],buff);
		g++;
	}*/
	while((ch = fgetc(fp)) != EOF)
	{
     
        printf("%c is operator\n", &ch);           
           
    }

	//fprintf(fp, "This is testing for fprintf...\n");
	//fputs("This is testing for fputs...\n", fp);fgetc(fp) 

	fclose(fp);

	printf("\n----after file----");

}
