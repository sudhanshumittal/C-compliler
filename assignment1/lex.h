#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define EOI		0	/* End of input			*/
#define SEMI		1	/* ; 				*/
#define PLUS 		2	/* + 				*/
#define TIMES		3	/* * 				*/
#define LP		4	/* (				*/
#define RP		5	/* )				*/
#define NUM_OR_ID	6	/* Decimal Number or Identifier */
#define MINUS		7
#define DIV			8
#define GT			9
#define LT			10
#define EQU			11
#define ASGN		12
#define IF			13
#define THEN		14
#define DO			15
#define WHILE		16
#define BEGIN		17
#define END			18
extern char *yytext;		/* in lex.c			*/
extern int yyleng;
extern yylineno;
extern FILE *fp;