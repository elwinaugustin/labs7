num 0*[0-9]*0+[0-9]*
%%
{num} printf("accepted");
.+ printf("not accepted");
%%
main()
{
	yyin=stdin;
	printf("Enter the string:");
	yylex();
}
