#include "lex.h"

char* yytext = ""; /* Lexeme (not '\0'
                      terminated)              */
int yyleng   = 0;  /* Lexeme length.           */
int yylineno = 0;  /* Input line number        */
int lex(void){
   static char input_buffer[1024];
   //memset(input_buffer,'\0',sizeof(input_buffer));
   /*char c[100] ={0};
		 int i;
		 while(fgets(c,100,fp)){
		 for (i = 0; i < strlen(c); i++)
			{
            if ( c[i] == '\n' || c[i] == '\r' )
                c[i] = '\0';
			}
			strcat(input_buffer,c);
		 }
	*/	 
   char *current;
    

   current = yytext + yyleng; /* Skip current
                                 lexeme        */

   while(1){       /* Get the next one         */
      while(!*current ){
	  
         /* Get new lines, skipping any leading
          * white space on the line,
          * until a nonblank line is found.
          */
		 current = input_buffer;
		 if( fp==0 ) printf("shite");
		 
		 
		  
		//  printf("input buffer: %s\n", input_buffer);
		//   return EOI;
        
         if( !fgets(input_buffer,100,fp)){
            *current = '\0' ;
			printf("imput: %s", input_buffer);
            return EOI;
         }
		 yylineno+=1;
		 printf("input buffer: %s\n", input_buffer);
		 printf("current: %s\n", current);		 
		 
         ++yylineno;
         while(isspace(*current))
            ++current;
	  }
	  
      for(; *current; ++current){
         /* Get the next token */
         yytext = current;
         yyleng = 1;
         switch( *current ){
           case ';':
            return SEMI;
           case '+':
            return PLUS;
           case '-':
            return MINUS;
           case '*':
            return TIMES;
           case '/':
            return DIV;
           case '(':
            return LP;
           case ')':
            return RP;
		   case '>':
            return GT;
		   case '<':
            return LT;
		   case '=':
            return EQU;
		   case ':':
			current +=1;
			if( current[0] == '='){
				yyleng = 2;
				return ASGN;
			}
			else {
				 fprintf(stderr, "Unexpected character <%c> on line %d\n", *current,yylineno);
			}
				
           case '\n':
           case '\t':
           case ' ' :
            break;
           default:
            if(!isalnum(*current))
               fprintf(stderr, "Unexpected character <%c> on line %d\n", *current,yylineno);
            else if(isalpha(*current)){
			   char lexeme[10];
			   memset(lexeme,'\0',sizeof(lexeme));
			   int i = 0;
			   while(isalnum(*current)|| current[0]=='_')
			   {
					strncpy(lexeme+i, current,sizeof(char));
					i++;					
					++current;					
			   }
			 //  printf("\nlexeme = %s\n",lexeme);
			   yyleng = current - yytext;
			   if( !strncmp(lexeme,"if", (sizeof("if")-1))){
					//printf("if");
					return IF;
			   }
			   else if( !strncmp(lexeme, "then",(sizeof("then")-1))){ 
						//printf("then");
						return THEN;
			   }
			   else if(!strncmp(lexeme, "do", sizeof("do")-1)){
					return DO;
			   }
			   else if(!strncmp(lexeme, "while", sizeof("while")-1)){
					return WHILE;
			   }
			   else if(!strncmp(lexeme, "begin", sizeof("begin")-1)){
					return BEGIN;
			   }
			   else if(!strncmp(lexeme, "end", sizeof("end")-1)){
					return END;	
			   }			   
               else{
					return NUM_OR_ID;
			   }
			}
			else
				return NUM_OR_ID;
            break;
         }
      }
   }
}


static int Lookahead = -1; /* Lookahead token  */

int match(int token){
   /* Return true if "token" matches the
      current lookahead symbol.                */

   if(Lookahead == -1)
      Lookahead = lex();
	//  printf("\nlookahead = %d\n",Lookahead);

   return token == Lookahead;
}

void advance(void){
/* Advance the lookahead to the next
   input symbol.                               */

    Lookahead = lex();	
	 // printf("\nlookahead = %d\n",Lookahead);
}
