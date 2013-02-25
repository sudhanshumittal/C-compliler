PROBLEM STATEMENT:

Assignment 3(a):
Design an LL(1) parser for the language you have used in Assignment 2.
The parser needs to call the lexical analyzer. The Parser takes input as
the source code, calls the lexical analyzer to generate tokens and finally
do parsing. The parser should also have the facility to take an arbitrary
CFG and generate LL(1)table and display it. Also, parsing stack should be
displayed.
-----------------------
The problem defined above describes ONLY the basic requirements. You are
free to implement in your own way for efficiency in implementation.
Extra credits will be given for “efficiency in implementation”, display of
results, extra features like handling ambiguity, elimination of left
recursion etc. !!!!

Assignment 3(b):
Implement a Parser using Yacc for the language used in Assignment 1 (b).

USAGE: 
step 1) make
step 2) ./a.out

GUIDELINES:

grammer.txt contains grammer rules
rules.txt contains regular expressions for lexical analysis
parse.txt contains the parse table generated ll parsing table
string s:global string contains the input C code read from file input.c    
1) yylen:int contains length of current token
2) yytok_class:char* contains token class of current token
3) yytext:string contains next token
4) call function lex() to update these variables for the next token
5) object g: class grammer in file syn/syn.h contains->
	a) parse_table:vector<vector<string> > table o  
	b) ll: boolean is true if the given grammer is LL, false oherwise
	c) rules: vector <class rule> 
		i) every rule has an lhs:string and 
		ii) rhs: vector<vector<string> >  wehere the outer inner vector<string> represents one alternative in a rule 
		
OBJECTIVE:
use the function lex(), the grammer ( parsing table and rules) to check if the C code follows the grammer and DISPLAY THE PARSING STACK.
NOTE:

DO NOT ALTER LEX.H OR SYN.H . DO ALL YOUR WORK IN MAIN.CPP   CALL ME UNTILL 2 AM, im awake.
