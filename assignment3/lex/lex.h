#include<stdio.h>
#include"dfa.h"
#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
#define MAX_TOKEN_tok_class 100 //no of regeular expressions

int tcCount;
int check(string input,int first, int last,int tok_class);
void print_dfatrans(int z);
void preprocess( char* input, char* regex);
int symbol_present(char *symtable, char * sym);
void preprocess( char* input, char* regex);
void recycle();
void construct_token_tok_classes();
void lex();

int first =0;
struct token_tok_class{
	char regex[max_regex];
	char tok_class_id[20];
	//struct state Dstates[MAX_STATES];
	char Dtrans[MAX_STATES][CHAR_COUNT];
	int initialstate;
	int finalstate;
	int rejectstate;
};
struct token_tok_class tcArray[MAX_TOKEN_tok_class];

int yylen;
int yyline;
string yytext;
string yytok_class;
string s;
int generate_lex(){
	tcCount = 0;
	//char regex[max_regex];
	char regex_in[max_regex];                           
	FILE *fp;
	fp=fopen("rules.txt", "r");
	if(!fp){
		//printf("file not found");
		printerror("file not found");
	
	}
	while(!feof(fp))
	{
		fscanf(fp,"%s %s\n", tcArray[tcCount].tok_class_id,regex_in);
		//printf("regex_in= %s\n",regex_in);
		preprocess(regex_in, tcArray[tcCount].regex);
		printf("regex= %s\n",tcArray[tcCount].regex);
		recycle();
		//printf("regex= %s\n",tcArray[tcCount].regex);
		create_transition_table(tcArray[tcCount].regex);/*resets global Dtates and Dtrans before usage function  init();*/
		construct_token_tok_classes();
		print_dfatrans(tcCount);
		tcCount++;		                 
	}
	fclose(fp);
	recycle();
	return 0;
}
void print_dfatrans(int z){
	int i,j;
	/*ofstream fp("transition_table.txt");
	for(i=0;i<MAX_STATES; i++){
		
		for(j=0;j<CHAR_COUNT; j++){
			fp<<" "<<tcArray[z].Dtrans[i][j];
		}	
		fp<<endl;
		
	}
	fp<<"initial State : "<<tcArray[z].initialstate+'A'<<endl;
	fp<<"reject State : "<<tcArray[z].rejectstate+'A'<<endl;
	fp<<"final State : "<<tcArray[z].finalstate+'A'<<endl;
	fp.close();*/
}
void lex(){
	
	while(s[0]== ' '){
	s = s.substr(1,s.size()-1);
	 first++;
	}
	int  last = 0;
	//printf("first = %d,last = %d, s = {%s}\n",first,last,  s);
	if( s[0] == '$'){
		yytext="$";
		yytok_class= "$";
		yylen =1;
		return ;
	}
	yytext="";
	yytok_class= "";
	yylen =0;
	
	//int len = strlen(s);
	int last_token_found_start =-1;
	int last_token_found_end =-1;
	int last_token_found_tok_class=-1;
	while(s[last] != '\0' && s[last] != ' '){
		int j;
		for(j=0;j<tcCount; j++){
			//printf("first = %d\tlast = %d\tcheck = %d\n",0, last, check(s, 0,last,j));
			if(check(s, 0,last,j )){
			
			 //last_token_found_start = first;
			 last_token_found_end = last;
			 last_token_found_tok_class = j;
			 break;
			}
		}
		last++;
		if(s[last] == '\0' || s[last] == ' ') {
			if(last_token_found_end ==-1) {
				
				printerror("last token found ==-1");
				return;	
			}
			yylen = last_token_found_end+1;
			first = first+last_token_found_end+1;			
			yytext = s.substr(0, yylen);
		}
	}
	stringstream alpha;
	alpha<<tcArray[last_token_found_tok_class].tok_class_id;
	alpha>>yytok_class;
	s = s.substr(yylen, s.size()-yylen);
//	cout<<"s in lex = "<< s;
	//printf("tokens:\n");
}
int check(string input,int first, int last,int tok_class){
	int i;
	int state = tcArray[tok_class].initialstate;
	for( i =first; i<=last; i++)
	{
		//printf("tok_class is %d state is %d\n",tok_class, state+1);
		state = tcArray[tok_class].Dtrans[state+1][input[i]-first_char+1]-'A';
		//state = newstate;
	}
	return state == tcArray[tok_class].finalstate;
}
void preprocess( char* input, char* regex)
{
	//printf("infn : %s\n",input);
	int c = 0;      // reading input[]
	int pt = 0; // to write in regex[]
	int isalpha = 0;
	while(input[c] != '\0')
	{
		//printf("%c\n",input[c]);
		if(!isreserved(input[c]))//(input[c]>='a'&& input[c]<='z') || (input[c]>='A' && input[c]<='Z'))
		{
			
			if(isalpha)
			{	
				regex[pt] = '.';
				pt++;
				
			}
			if(input[c] == '\\' ){
					regex[pt] = input[c];
					pt++;
					c++;
			}
			isalpha = 1;
			regex[pt] = input[c];
			pt++;
		}
		else if(input[c]=='|')
		{
			isalpha = 0;
			regex[pt] = input[c];
			pt++;
		}else if(input[c]=='(')
		{
			if(isalpha)
			{	
				regex[pt] = '.';
				pt++;
			}
			isalpha = 0;
			regex[pt] = input[c];
			pt++;
		}else if(input[c]=='*'|| input[c]==')')
		{
			isalpha = 1;
			regex[pt] = input[c];
			pt++;
		}else
		{
			regex[pt] = input[c];
			pt++;
		}
		c++;
	}
	regex[pt] = '\0';
	//printf(" %s\n", regex);
}
void recycle(){
	/*intialstate, finalstate,rejectstate*/
	initialstate = 0;
	finalstate = -1;
	rejectstate = 1;
	/*emptying stacks*/
	structstacktop = -1;
	charstacktop = -1;
	/*resetting followpos*/
	int i;
	for(i=0;i<MAX; i++)
	{
		memset(followPos[i],0,sizeof(followPos[i]));
	}
	destroy_tree(root);
	
}

void construct_token_tok_classes(){
	
//	strcpy(tcArray[tcCount].regex,regex);
//	strcpy(tcArray[tcCount].tok_class_id,tok_class_id);
	//construct_dfa(regex);
	int j=0;
	int i=0;
	/*copy global into local Dtrans of the token tok_class*/
	for(i=0; i<MAX_STATES; i++)
		for(j=0; j<CHAR_COUNT; j++)
			tcArray[tcCount].Dtrans[i][j] = Dtrans[i][j];
	/*for(i=0; i<MAX_STATES; i++)
	{
		tcArray[tcCount-1].Dstates[i].marked = Dstates[i].marked;  
		tcArray[tcCount-1].Dstates[i].name = Dstates[i].name;
		for(j=0; j<10; j++){
			tcArray[tcCount-1].Dstates[i]
		}	
	}*/
	tcArray[tcCount].finalstate = finalstate;
	//printf("tcArray[tcCount].finalstate = %d",tcArray[tcCount].finalstate);
	tcArray[tcCount].initialstate = initialstate;
	tcArray[tcCount].rejectstate = rejectstate;	
	
}
int symbol_present(char *symtable, char * sym){
	if (strstr(symtable,sym)) return 0;
	else return 1;
}
