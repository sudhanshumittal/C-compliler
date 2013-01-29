#include<string.h>
#define MAX_SYM_COUNT 20
struct symboltable{
	int sno;
	char name[20];
	int lineno;
} ;
struct symboltable symtab[MAX_SYM_COUNT];
int symcount = 0;
void add_symbol( char * name, int lineno){
	if(symcount >= MAX_SYM_COUNT){
		fprintf(stderr,"error: symbol table exhausted");
		return ;
	}
	symcount+=1;
	symtab[symcount-1].sno = symcount;
	strcpy(symtab[symcount-1].name,name);
	symtab[symcount-1].lineno = lineno;
	 
}
int symbol_present( char * sym){
	int i;
	for( i=0; i<symcount;i++){
		if(!strcmp(symtab[i].name, sym)) return i+1;		
	}
	return 0; 
	
}
void print_symbol_table(){
	int i;
	printf("\nsymbol table");
	for( i=0; i<symcount;i++){
		printf("\n%d\t%s\t%d",symtab[i].sno,symtab[i].name,symtab[i].lineno);
	}
	
}

