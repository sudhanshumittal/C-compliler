#include <stdio.h>
#include <stdlib.h>
#include "lex.h"

char    *factor     ( void );
char    *term       ( void );
char    *expression ( void );
char 	*opt_statements	(void);
char 	*stmt_list	(void);
char 	*stmt_list_new(void);
extern char *newname( void);
extern void freename( char *name );
/* required to handle begin - end */
int stack[10];
int top = -1;
int push(int val){
	if( top ==9) return 0;
	else stack[++top] = val;
	return 1;
}
int pop(){
	if(top ==-1) return -1;
	else {
		int val = stack[top];
		top--;
		return val;
	}
}
statements()
{
    /*  statements -> expression SEMI  |  expression SEMI statements  */

    char *tempvar;

    while( !match(EOI) )
    {
		if( match(IF)){
			/* stmt ->if expr then stmt */
			advance();
			//printf("if ");
			tempvar = expression();
			if( match(THEN) ){
				printf("if %s then", tempvar);
				advance();
			}
			else{
				fprintf( stderr, "\n%d: Missing 'then' after 'if' \n", yylineno );
			//	exit(0);
			}
		}
		else if ( match( WHILE )){
				/* stmt ->while expr do stmt */
			
				advance();
				//printf("while ");
				tempvar = expression();
				if(match(DO)) {
					printf("while %s do", tempvar);
					advance();
				}
				else
				fprintf( stderr, "%d: 'while' without 'do' \n", yylineno );
        }
		else if ( match( BEGIN )){
				/* stmt -> begin opt_stmts end */
				if( !push(BEGIN)){
					printf("%d: Fatal error stack out of memory \n", yylineno);
					exit(0);
				}
				advance();
				tempvar = opt_statements();
				if(match(END)) 
					advance();
				else
				fprintf( stderr, "%d: Missing 'end' after 'begin' \n", yylineno );
        }
		else if( match(END)){
			/* check if this end corresponds to a begin */
			if( pop() != BEGIN ) printf( "%d:end without and if \n", yylineno);
			else return;
		}
		else{		
			tempvar = expression();
			if( match( SEMI ))
				advance();
			else{
				fprintf( stderr, "%d: Inserting missing semicolon\n", yylineno );
				exit(0);
			}
		}
		
	}
	freename( tempvar );
		
}
char * opt_statements(){
	char * tempvar; 
	if( match(END)) {
		return tempvar;
	}
	else return stmt_list();
}
char * stmt_list(){
	while(!match(END)){
		//advance();	
		statements();
	/*	if( !match(SEMI)){
		advance();
			break;
		}*/
	}
	return NULL; 
}

char    *expression()
{
    /* expression -> term expression'
     * expression' -> PLUS term expression' | MINUS term expression |
					  GT term expression| LT term expression|
					  EQU term expression | epsilon
     */

    char  *tempvar, *tempvar2;

    tempvar = term();
    while( (match( PLUS ) || match(MINUS) || match(GT) || match(LT) || match(EQU)) && !match(THEN) && !match (DO))
    {
		if ( match(PLUS) ) 
		{
			advance();
			tempvar2 = term();
			printf("    %s += %s\n", tempvar, tempvar2 );
		}
		else if ( match(MINUS) )
		{
			advance();
			tempvar2 = term();
			printf("    %s -= %s\n", tempvar, tempvar2 );
		}
		else if ( match(GT) )
		{
			advance();
			tempvar2 = term();
			printf("    %s = %s > %s\n", tempvar, tempvar, tempvar2 );
		}
		else if ( match(LT) )
		{
			advance();
			tempvar2 = term();
			printf("    %s = %s < %s\n", tempvar, tempvar, tempvar2 );
		}
		else
		{
			advance();
			tempvar2 = term();
			printf("    %s = %s == %s\n", tempvar, tempvar, tempvar2 );
		}
		
		freename( tempvar2 );
		
	}

    return tempvar;
}

char    *term()
{
    char  *tempvar, *tempvar2 ;

    tempvar = factor();
    while( match( TIMES ) || match(DIV) )
    {
		if(match(TIMES))
		{
			advance();
			tempvar2 = factor();
			printf("    %s *= %s\n", tempvar, tempvar2 );
		}
		else
		{
			advance();
			tempvar2 = factor();
			printf("    %s /= %s\n", tempvar, tempvar2 );
		
		}
		freename( tempvar2 );
    }

    return tempvar;
}

char    *factor()
{
    char *tempvar;

    if( match(NUM_OR_ID) )
    {
	/* Print the assignment instruction. The %0.*s conversion is a form of
	 * %X.Ys, where X is the field width and Y is the maximum number of
	 * characters that will be printed (even if the string is longer). I'm
	 * using the %0.*s to print the string because it's not \0 terminated.
	 * The field has a default width of 0, but it will grow the size needed
	 * to print the string. The ".*" tells printf() to take the maximum-
	 * number-of-characters count from the next argument (yyleng).
	 */

        printf("    %s = %0.*s\n", tempvar = newname(), yyleng, yytext );
        advance();
    }
    else if( match(LP) )
    {
        advance();
        tempvar = expression();
        if( match(RP) )
            advance();
        else
            fprintf(stderr, "%d: Mismatched parenthesis\n", yylineno );
    }
    else
	fprintf( stderr, "%d: Number or identifier expected\n", yylineno );

    return tempvar;
}
