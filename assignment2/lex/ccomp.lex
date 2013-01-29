%{
#include<stdio.h>
#include"functions.h"
%}
ID [a-zA-Z][a-zA-Z0-9_]*
NUM [0-9]+
	int num_lines =1;
	//int symcount=0;
%%
main	printf("<MAIN_FUNCTION>");
return printf("<return>");
"*"|"/"|"+"|"-"|"="	printf("<OP,%s>",yytext);
";"	printf("<SEMI>");
\n	++num_lines;
{NUM}	printf("<NUM,%s>",yytext);
("int"|"char"|"void")[ \t]"*"?	printf("<DATATYPE, %s>",yytext);
"{"	printf("<open_parenthesis>");
"}"	printf("<closing_parenthsis>");
"("|")"	printf("<bracket>");
"if"|"then"|"else"|"do"|"while"|"for"	printf("<keyword>");
#include<[a-z]+.h> printf("<PREPROCESSOR, include>");
> printf("<INLUDE_END>");
{ID}	{int symno = symbol_present( yytext);
	if(symno ==0 ){
		add_symbol( yytext, num_lines);
		printf(" <ID,%d> ",symcount);
	}
	else{
		printf(" <ID, %d>", symno);
	}
	}	
"\""[^\"]*"\""	printf("<STRING>");
[^ \t\n]	{
		printf("\nerror: unknown character");
		exit(0);
	}
%%

main(int argc, char *argv[]){
	yyin = fopen(argv[1], "r");
	yylex();
	print_symbol_table( );
}

