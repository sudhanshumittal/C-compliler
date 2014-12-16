%{
/* header section.
 * declare terminal and nonterminal symbols
 */
#include <cstdio>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include<sstream>
#include<unordered_map>
#define YYDEBUG 1     /* enables compilation with trace facility  */
using namespace std;
typedef string label;

int noerror=1;
// stuff from flex that bison needs to know about:
extern char yytext[];
extern int yylex(); /* type of yylex()  */
extern int  yylineno;
extern int yyparse();
extern  FILE *yyin;
 
void yyerror(const char *msg);
string newlabel();
void gen(string);
class nt{
public:
	string code;
	label istrue;
	label isfalse;
	label begin;
	string next;
	
};
unordered_map<int, nt> ntset;
%}
%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%start translation_unit
%%

primary_expression
	: IDENTIFIER													{}//printf("primary_expression->identifier\n");}																			
	| CONSTANT														{}//printf("primary_expression->constant\n");}
	| STRING_LITERAL												{}//printf("primary_expression->string\n");}
	| '(' expression ')'											{}//printf("primary_expression->(expression)");}
	;

postfix_expression
	: primary_expression											{}//printf("postexpr->postexpr primaryexpr\n");}
	| postfix_expression '[' expression ']'							{}//printf("postexpr->postexpr [expr]");}
	| postfix_expression '(' ')'									{}//printf("postexpr->postexpr()");}
	| postfix_expression '(' argument_expression_list ')'			{}//printf("postexpr->postexpr(arglist)");}
	| postfix_expression '.' IDENTIFIER								{}//printf("postexpr->postexpr.id\n");}
	| postfix_expression PTR_OP IDENTIFIER							{}//printf("postexpr->postexpr *id\n");}
	| postfix_expression INC_OP										{}//printf("postexpr->postexpr++\n");}
	| postfix_expression DEC_OP										{}//printf("postexpr->postexpr--\n");}
	;

argument_expression_list
	: assignment_expression											{}//printf("argexprlist->assgnexpr\n");}
	| argument_expression_list ',' assignment_expression			{}//printf("argexprlist->argexprlist,assgnexpr\n");}
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

cast_expression
	: unary_expression												{}//printf("**typecasting** cast->unaryexpr\n");}
	| '(' type_name ')' cast_expression								{}//printf("**typecasting** cast->(typename)cast\n");}
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers ';'											{}//printf("dec->decspecs;\n");}
	| declaration_specifiers init_declarator_list ';'						{}//printf("dec->decspecs initializelist;\n");}
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator
	| declarator '=' initializer
	;

storage_class_specifier
	: TYPEDEF
	| EXTERN
	| STATIC
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID
	| CHAR
	| SHORT
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| struct_or_union_specifier
	| enum_specifier
	| TYPE_NAME
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: IDENTIFIER											{}//printf("enmerator->id\n");}
	| IDENTIFIER '=' constant_expression					{}//printf("enmerator->id = const\n");}
	;

type_qualifier
	: CONST
	| VOLATILE
	;

declarator
	: pointer direct_declarator											{}//printf("decl->pointer decl\n");}
	| direct_declarator											{}//printf("decl->direct decl\n");}
	;

direct_declarator
	: IDENTIFIER
	| '(' declarator ')'
	| direct_declarator '[' constant_expression ']'
	| direct_declarator '[' ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' ')'
	;

pointer
	: '*'
	| '*' type_qualifier_list
	| '*' pointer
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list											{}//printf("paramtyplist->paramlist\n");}
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration											{}//printf("paramlist->paramdecl\n");}
	| parameter_list ',' parameter_declaration						{}//printf("paramlist->paramlist,paramdecl\n");}
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER											{}//printf("idlist->id\n");}
	| identifier_list ',' IDENTIFIER											{}//printf("idlist->idlist,id\n");}
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: assignment_expression											{}//printf("init->assign\n");}
	| '{' initializer_list '}'											{}//printf("**last dimension** init->{initlist}\n");}
	| '{' initializer_list ',' '}'											{}//printf("init->{initlist,}\n");}
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	;

statement
	: labeled_statement											{}//printf("stmt->lblstmt\n");}
	| compound_statement											{}//printf("stmt->compoundstmt\n");}
	| expression_statement											{}//printf("stmt->exprstmt\n");}
	| selection_statement											{}//printf("stmt->selstmt\n");}
	| iteration_statement											{}//printf("stmt->loopstmt\n");}
	| jump_statement											{}//printf("stmt->gotostmt\n");}
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}'
	| '{' statement_list '}'
	| '{' declaration_list '}'
	| '{' declaration_list statement_list '}'
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' expression ')' statement					{ 	ntset[$3].istrue = newlabel();
															ntset[$3].isfalse = ntset[$$].next;
															ntset[$5].next = ntset[$$].next;
															ntset[$$].code = ntset[$3].code + ntset[$3].istrue+":\t"+ntset[$5].code;
														}
	| IF '(' expression ')' statement ELSE statement	{
															ntset[$3].istrue = newlabel() ;
															ntset[$3].isfalse = newlabel() ;
															ntset[$5].next = ntset[$$].next ;
															ntset[$7].next = ntset[$$].next ;
															ntset[$$].code = ntset[$3].code + ntset[$3].istrue +":\t" + ntset[$5].code + "goto " + ntset[$$].next + ntset[$3].isfalse + ":\t" + ntset[$7].code;
															 cout<<ntset[$$].code;
														}
	| SWITCH '(' expression ')' statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
	;

translation_unit
	: external_declaration											{}//printf("**start symbol** transunit->extern\n");}
	| translation_unit external_declaration							{}//printf("**start symbol** transunit->transunit extern\n");}
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement											{}//printf("**func def**\n");}
	| declaration_specifiers declarator compound_statement	{}//printf("**func def**\n");}
	| declarator declaration_list compound_statement	{}//printf("**func def**\n");}
	| declarator compound_statement	{}//printf("**func def**\n");}
	;

%%
#include <stdio.h>
extern int column;

int main ()
{
  while(yyparse ()){
  		//yyparse ();
  }
	
}
void yyerror(const char *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}
int count =0;
string newlabel(){
	stringstream s;
	s<<"var_"<<count; 
	count++;
	return s.str();
}
void generate( string s){
	cout <<s<<endl;
}
