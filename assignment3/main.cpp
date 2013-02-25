#include<cstdlib>
#include<vector>
#include<string>
#include"./lex/lex.h"
#include"./syn/syn.h"
using namespace std;
void generate_lexical_analyzer() {
	int status = generate_lex();
	FILE *fp = fopen("input.c","r");
	if(!fp){
		printerror("file not found");
		
	}
	stringstream input;
//	char *input =(char *)malloc(100*sizeof(char));
	while(!feof(fp))
	{
		char buf[20];
		fscanf(fp,"%s",buf);
		if(feof(fp)) break;
		input<<buf<<" ";
	}
	//printf("input = %s\n", input);
	input<<" $";
	fclose(fp);
	s= input.str();
	//cout<<"UYTADYGAJSDGKJYASKUGASKJGJASGJGSJHGASJHGSJHG\n"<<s;//s += ;
}

void printstack(vector<string> v)
{
	int a = v.size();
	int b;
	cout<<"******************************************************************************************************************************************\n";
	cout<<"stack ==> ";
	for(b=a-1; b>=0; b--)
	{
		cout<<v[b]<<" ";
	}
	if( yytext != "$" )cout<<"\ninput==> "<<yytext<<" "<<s<<endl;
	else cout<<"\ninput==> "<<s<<endl;	
}
	
main(){
	generate_lexical_analyzer();
	int m=0;
	/*do{
		lex();
		cout<<m++<<"\t"<<yytok_class<<"\t"<< yytext<<endl;
	}while(yytext!="");*/
	generate_ll_parsing_table();
	//exit(0);
	cout<<"parse table printed\n";
	if (g.ll == false) print_error("THe given grammer is not ll");
    //exit(0);
    int j=0;
 	cout<<"##### parsing the input code ###############\n";
    vector<string> stack;
    stack.push_back("$");
    stack.push_back("START");
    int top,a,b;
    bool aa, bb;
    string ttop;
    printstack(stack);
    lex();
    while(1)
    {
    		       
    		//cout<<"s = "<<s<<endl;
    		
            top = stack.size()-1;
            ttop = stack[top];
            while(ttop == " "|| ttop == ""){ stack.pop_back(); 
            top = stack.size()-1;
            ttop = stack[top];
            }
           // printstack(stack);
          //  cout<<"akjshdkjh "<<stack[stack.size()-1];
            // case nttop
            //cout<<"bla\n";
         //   cout<<"yyetext = "<<yytext<<endl;
         //    cout<<"ttop = "<<ttop<<endl;
             
            if(ttop=="$" && yytext=="$")
            {
                    cout<<"accepted"<<endl;
                    break;
            }
            else if( ttop == yytext || ttop == yytok_class	)
            {
                    cout<<"\t "<<yytext<<" popped from stack\n";
                    stack.pop_back();
                    lex();
                   // continue;
            }
            else
            {
                  // cout<<"case 3\n";
                    aa=0;
                    bb=0;
                    
                    for(a=1;a<g.parse_table.size();a++)
                    {
                            //cout<<"non terminal symbols  = "<<g.parse_table[a][0]<<endl<<"ttop = "<<ttop<<endl;
                            if(g.parse_table[a][0]==ttop)
                            {
                                    aa=1;
                                  //  cout<<"found";
                                    break;
                                   
                            }
                    }
                   // cout<<"yyclass  = "<<yytok_class;
                            
                    for(b=1;b<g.parse_table[0].size();b++)
                    {
                            if(g.parse_table[0][b]==yytext ||  g.parse_table[0][b] == yytok_class)
                            {
                                    bb=1;
                                    break;
                            }
                    }
                    if(aa==0 || bb==0)
                    {
                            //cout<<a<<b;
                            
                            print_error("invalid symbol found");
                    }
                    string rrule=g.parse_table[a][b];
                   // cout<<a<<','<<b<<endl;
                    if (rrule == "")
                    	print_error("input does not belong to the grammer at "+ yytext );
                    int temp[2]={0,0};
                    int i=0, j=0;
                    while(i<rrule.size()){
                    	//cout<<"kajhsdh";
						if(rrule[i] == ',') 
							j++;
						else{
							temp[j] = 10*temp[j]+rrule[i]-'0';
							 
						}
						i++;                         
					}
					//cout<<"temp = "<<temp[0]<<" "<<temp[1];
					stack.pop_back();
					for(int k(g.rules[temp[0]].rhs[temp[1]].size()-1); k>=0 ; k--){
						if(g.rules[temp[0]].rhs[temp[1]][k] != epsilon ) stack.push_back(g.rules[temp[0]].rhs[temp[1]][k]);
					}
					
            }
			printstack(stack);
    }
	
}
