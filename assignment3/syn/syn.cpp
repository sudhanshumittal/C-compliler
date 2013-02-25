#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<sstream>
#include<string>
#include<algorithm>
#include<unordered_map>
#define epsilon "epsilon"
using namespace std;
char present_nt='A';
vector<string> terminals;
void printerror(string s);
string remaining(string pre, string all);
string longest_prefix(string a, string b);
//void generate_ll_parsing_table();
string new_non_teminal(){
	stringstream a;
	a<<"NONTERMINAL"<<	present_nt;
	present_nt++;
	if(present_nt>'Z') printerror("Ran out of non terminal symbols.");
	return a.str();
}
class prod_rule{
public:
	string lhs;
	vector<vector<string> > rhs;
	vector<string> symbols;
	prod_rule(string input){
		stringstream ss;
		ss<<input;
		cout<<endl<<"ss = "<<ss.str()<<endl;
		string s;
		ss>>s;
		if(s[s.size()-1] == ':') {
			//remove the appending colon
			s.erase(s.size()-1);
			lhs = s;
		}
		else{
			lhs = s;
			ss>>s;
			if(s!=":") printerror("invalid grammer syntax, ':' not found");			
		}
		/* calculating the rhs */
		while(ss>>s){
			vector<string> tempvec;
			do{
				s.erase (std::remove(s.begin(), s.end(), '\''), s.end());
				if(symbols.end()== find(symbols.begin(), symbols.end(), s))
					symbols.push_back(s);
			
				tempvec.push_back(s);
				
			}while(ss>>s && s != "|" && s != ";");
			rhs.push_back(tempvec);
		}
		for (auto& x: symbols) {
			cout<<x<<endl;
		}
	}
	vector<string> remove_left_recur(){
		
		vector<string> new_rules;
		cout<<"Removing left recursion...\n";
		for(int i(0); i<rhs.size(); i++){
			if(rhs[i][0]!="" && lhs != rhs[i][0]) continue;
			/* left recursion encountered in ith alternative ...*/
			string newsymbol = new_non_teminal();
			symbols.push_back(newsymbol);
			for(int j(0); j<rhs.size(); j++){
				if(j==i) continue;
				
				rhs[j].push_back(newsymbol);
			}
			/*if no other rule is present_nt then create a antificial rule*/
			if(rhs.size()==1){
				vector <string> new_alter;
				 new_alter.push_back(newsymbol);
				 rhs.push_back(new_alter);
			} /*create a new rule and push in front of rule i symbol newsymbol*/
			stringstream s;
			s<<newsymbol << " : ";
			//prod_rule r;rhs[i].push_back(newsymbol);
			for(int j(1); j<rhs[i].size();j++)
			{	/*string temp = rhs[i][0];
				rhs[i].erase(rhs[i].begin());
				rhs[i].push_back(temp);	*/
				if(rhs[i][j].size()==1 && !is_terminal(rhs[i][j]) )
					s<< " '"<<rhs[i][j]<<"' ";
				else
					s<< rhs[i][j]<<" ";
			}
			s<<newsymbol<<" | " <<epsilon;
			rhs.erase(rhs.begin()+i);
			//cout<<"new rule created ... "<<s.str();
			new_rules.push_back(s.str());
		}
		return new_rules;
	}
	void print_rule(){
		cout<<lhs<<"-> ";
		for(int i=0; i<rhs.size(); i++){
			for(int j=0; j<rhs[i].size(); j++)
				cout<<rhs[i][j]<<" ";			
			cout<<"| ";
		}
		
		cout<<endl;
		//cout<<"done";
	}
	
};
typedef vector<string> string_vector; 
class grammer{
	vector <prod_rule> rules;
	//string_vector first_set;
	vector <bool> has_ep;
	unordered_map<string, string_vector> first_set;
	unordered_map<string, bool> has_epsilon;
	unordered_map<string, string_vector> follow_set;
	vector <string_vector> parse_table;
	bool ll;	
public:
	bool is_terminal(string s){
		return find(terminals.begin(), terminals.end(), s) == terminals.end();
	}
	void add_rule(prod_rule p){
		rules.push_back(p);
	}
	void first_sets(){
		//cout<<rules.size()<<endl;
		/*
			if( X is terminal or X is epsilon) first(X) = X
		*/
		for(int i(0); i<rules.size();i++){
			for(int j(0); j<rules[i].symbols.size(); j++){
				if(is_terminal(rules[i].symbols[j])){
					string_vector v;
					v.push_back(rules[i].symbols[j]) ;
					first_set[rules[i].symbols[j]] = v; 			
					if(rules[i].symbols[j]==epsilon) has_epsilon[rules[i].symbols[j]] = true;
					else has_epsilon[rules[i].symbols[j]] = false;
				}
				else{	//non terminal init with empty first set
					string_vector v;
					first_set[rules[i].symbols[j]] = v;
					has_epsilon[rules[i].symbols[j]] = false;
				}
				has_epsilon[rules[i].lhs] = false;
			}

		}
		cout<<"printing has epsilon \n";
		for (auto& x: has_epsilon) {
    		std::cout << x.first << ": " << x.second<< std::endl;
  		}
		bool added ;
		do{
			added = false;
			for(int i(0); i<rules.size();i++){
				for( int j(0); j<rules[i].rhs.size(); j++)
					for( int k(0); k<rules[i].rhs[j].size() ; k++){
							/*insert first (rhs symbol ) in to the first (lhs nonterminal)*/
						for (auto& x: first_set[rules[i].rhs[j][k]]) {
							if (x== epsilon) continue;
							if(first_set[rules[i].lhs].end() == find(first_set[rules[i].lhs].begin(),first_set[rules[i].lhs].end(), x))
							{
								
								first_set[rules[i].lhs].push_back(x); 				
				  				added = true;
				  			}
				  			//cout<<x<<" ";
				  		} 
						/*if all symbols in rhs have epsilon */
						if (k == rules[i].rhs[j].size()-1 && has_epsilon[rules[i].rhs[j][k]]){
						 has_epsilon[rules[i].lhs]= true;
						 //added = true;
						}/*if eplilon not preseent in the current symbol in then do not continue */
						if( !has_epsilon[rules[i].rhs[j][k]]) break;
						//cout<<rules[i].rhs[j][k]<<endl;
					}
			}
		}while(added == true);
		cout<<"printing has epsilon \n";
		for (auto& x: has_epsilon) {
    		std::cout << x.first << ": " << x.second<< std::endl;
  		}
		
	}
	void print_firsts(){
		cout<<"**********************\nprinting first sets...\n";
		for (auto& x: first_set) {
    		std::cout << x.first << ": " ;
    		for (auto& y: x.second)
    			cout<< y<<" ";
  			cout<<endl;
  		}
  		cout<<"**********************\n";
	}
	void print_follows(){
		cout<<"**************************\nprinting follow sets...\n";
		for (auto& x: follow_set) {
    		std::cout << x.first << ": " ;
    		for (auto& y: x.second)
    			cout<< y<<" ";
  			cout<<endl;
  		}
  		cout<<"**********************\n";
	}
	void follow_sets(){
		string_vector temp;
		temp.push_back("$");
		follow_set["START"] = temp;
		//print_follows();
		bool added ;
		do{
			added = false;
			for(int i(0); i<rules.size();i++){
				for( int j(0); j<rules[i].rhs.size(); j++){
					cout<<"#################\n";
					//cout<<"here";
					rules[i].print_rule();
					//cout<<"here";	
					for( int k(0); k<rules[i].rhs[j].size() ; k++){
						
						if(is_terminal(rules[i].rhs[j][k])){
							//cout<<"is terminal "<<rules[i].rhs[j][k]<<" " <<is_terminal(rules[i].rhs[j][k])<<endl;
							continue ; 
						}
						
						/*if if A-> xB  add follow(A) to follow(B)*/	
						if(k == rules[i].rhs[j].size()-1) {
							
							
							/* if A-> xBy and first9y) contains epsilon then add follow(A) to follow(b)*/
							int pos=k;
							do{
								//cout<<has_epsilon[rules[i].rhs[i][pos]]<<endl;
							
								if(!is_terminal(rules[i].rhs[j][pos])) {
									for (auto& x: follow_set[rules[i].lhs]){
									//	cout<<x<<endl;
								
										if(follow_set[rules[i].rhs[j][pos]].end() == 
										find(follow_set[rules[i].rhs[j][pos]].begin(),follow_set[rules[i].rhs[j][pos]].end(), x)){
											follow_set[rules[i].rhs[j][pos]].push_back(x);
											cout<<"****"<<x<<" from follow("<<rules[i].lhs<<") added to follow("<<rules[i].rhs[j][pos]<<endl;
							
											added = true;
										}
									}
								}
							pos--;
							}while(pos != -1 && has_epsilon[rules[i].rhs[j][pos+1]]);
							
							
						}
						else
						{
							//cout<<"is terminal "<<rules[i].rhs[j][k]<<" " <<is_terminal(rules[i].rhs[j][k])<<endl;
							// cout<<"k= "<<k;
								
							int m = 1;
							do{
								/*if A-> xBy  add first (y) to follow(B) */
					
								if(k+m ==  rules[i].rhs[j].size()) break;
								for (auto& x: first_set[rules[i].rhs[j][k+m]])
								{
									if(x== epsilon) continue;
									if(follow_set[rules[i].rhs[j][k]].end() == 
									find(follow_set[rules[i].rhs[j][k]].begin(),follow_set[rules[i].rhs[j][k]].end(),x)){
										follow_set[rules[i].rhs[j][k]].push_back(x);
										cout<<"****"<<x<<" from first of ("<<rules[i].rhs[j][k+m]<<") added to follow("<<rules[i].rhs[j][k]<<endl;
						
										added = true;
									}
								
								}
					
								//cout<<"here\n";
								//cout<<rules[i].rhs[j][k+m-1];
								//cout<<"has_epsilon "<<has_epsilon[rules[i].rhs[j][k+m]]<<endl;
								//cout<<"there\n";
								if(!has_epsilon[rules[i].rhs[j][k+m]]) break;
								m++;
							
							}while(1);
						}
					}
				}
			}
		}while(added == true);
	}
	void print_rules(){
		cout<<"*******************************************\n";
		for(int i(0); i<rules.size();i++)
			rules[i].print_rule();
		cout<<"*******************************************\n";
			
	}
 void generate_parse_table(){
 	/* generate termianl symbls*/
 	ll = true;
 	cout<<"generating parsing table...\n";
 	string_vector heading ;
 	heading.push_back("#");
 	for (auto& x: has_epsilon){
 		if(is_terminal(x.first) && x.first != epsilon){
 		 heading.push_back(x.first);
 		//	cout<<x.first;
 		}
 	
 	}
 	//string s = "asd";
 	heading.push_back("$");
 	parse_table.push_back(heading);
 	
 	for(int i(0); i<rules.size();i++){
		string_vector v;
		
		for(auto& x: heading){
			v.push_back("");
			
		}
		v[0] = rules[i].lhs;
		bool bla = false;	
		for( int j(0); j<rules[i].rhs.size(); j++){
			int k=0;
			/*for each rule α for each terminal t in First(α): put α in Table[X,t]*/		
			do{
				
				if(k ==  rules[i].rhs[j].size()){
				 bla=true;
				 break;
				}
				cout<<rules[i].rhs[j].size()<<endl;
				for (auto& x: first_set[rules[i].rhs[j][k]]){
					string_vector::iterator index  = find(heading.begin(), heading.end(), x );
					if(index == heading.end()) continue;
					stringstream res;
					res<<i<<","<<j;
					if(v[index-heading.begin()] !="") ll = false;
					v[index-heading.begin()] += res.str(); 
					//cout<<x;				
				}
				if(! has_epsilon[rules[i].rhs[j][k]]) break;
				k++;
			}while(1);
			/*if ǫ is in First(α) then:
				for each terminal t in Follow(X): put α in Table[X,t]*/
			//cout<<"part 2";
		//	if(k == rules[i].rhs[j].size()-1 ){
				if(bla)
				for (auto& x: follow_set[rules[i].lhs]){
					string_vector::iterator index  = find(heading.begin(), heading.end(), x );
					//if(index == parse_table[0].end()) continue;
					stringstream res;
					res<<i<<","<<j;
					if(v[index-heading.begin()] !="") ll = false;
					v[index-heading.begin()] += res.str(); 
					
				}	
				
		//	}
			
				
				
		}	
		
		parse_table.push_back(v);	
	}
	
 	
 	
 }
 void print_parse_table(){
 	cout<<"printing parse table ... \n";
 	ofstream fp("parse.txt");
 	
 	for( auto& x: parse_table){
 		for(auto& y: x){
 			fp<<y;
 			for(int i(0); i<15- y.size(); i++)
 				fp<<" ";
 			 
 		}
 		fp<<endl;
 	}
 	fp.close();
 	
 }
};
void printerror(string s){
	cout<<"ERROR: "<<s<<endl;
	exit(-1);
}
string longest_prefix_func(string a, string b){
	int i=0;
	while(a[i]==b[i]){
		i++;
	}
	return a.substr(0,i);
	
}
string remaining(string pre, string all){
	string  rem = all.substr(pre.size(),pre.size());
//	cout<<"rem = "<<rem;
	if(rem ==""|| rem ==" ") return epsilon;
	else return rem;
}
vector<string> left_factor(string prestring){
	vector <string> post_rules;
	stringstream pre;
	pre<<prestring;
	stringstream post;
	vector<string> alternate;
	/*break the alternates into pieces(seperated by '|')*/
	string lhs;
	pre>>lhs;
	string temp="";
	string token;
	while(pre>>token){
		if(token==":") lhs+=" :";
		else if(token =="|" || token ==";"){
			// new rule
				cout<<"temp  = "<<temp<<endl;
	
			alternate.push_back(temp);
			temp="";
		}
		else
		{	temp+= " ";
			temp+=token;
		}
		 
	}
//	cout<<alternate[0];
	string longest_prefix;
	 /*used to generate spare non teminals*/
	//do{
		longest_prefix="";
		int alter1, alter2;
		for(int i(0); i<alternate.size(); i++)
			for(int j(i+1); j<alternate.size(); j++){
				string temp_prefix = longest_prefix_func(alternate[i],alternate[j]);
				if(temp_prefix.size()> longest_prefix.size()){
					longest_prefix = temp_prefix;
					alter1 = i;
					alter2 = j;
				} 
			}
		cout<<"longest pre "<<longest_prefix<<"###"<<endl;
		if(longest_prefix != "" && longest_prefix !=" " && alternate[alter1][longest_prefix.size()]!=' '){
			/*alternatice alter1, alter2 have longest_prefix in common*/
			string s1 = remaining(longest_prefix, alternate[alter1]);   
			string s2 = remaining(longest_prefix, alternate[alter2]);			
			string newnt = new_non_teminal();
			stringstream temprule ;
			temprule<<longest_prefix<<" "<<newnt;
			alternate[alter1] = temprule.str();
			cout<<"alternate[alter1] "<<alternate[alter1]<<endl;
			
			temprule.str("");
			//cout<<"temprule "<<temprule.str()<<endl;
			temprule<<newnt<<" : "<<s1 <<" | "<<s2; /*remaining parts of alter2, alter2*/
			alternate.erase(alternate.begin()+alter2);
			post_rules.push_back(temprule.str());
			//cout<<"alternate[alter2] "<<alternate[alter2]<<endl;
		}	
	/*combine alternates into a complete rule*/
	post<<lhs;
	int i;
	for(i=0; i<alternate.size()-1; i++)
	{
		post<<alternate[i]<<" | ";
	}
	post<<alternate[i]<<" ;";
	post_rules.push_back(post.str());
	return post_rules;
}
string remove_left_recursion(string pre){
}

int main(){
	grammer g;
	fstream fp;
	fp.open("grammer.txt");
	if(!fp) perror("could not open file grammer");
	string terminal="";
	fp>>terminal; 
	if( terminal == "%token")
		do{
			cout<<"bla";	
			fp>>terminal;
			terminals.push_back(terminal);
		}while(terminal != "%%" );
	while(!fp.eof()){
		stringstream rule;
		string s;		
		do{
			/*extract one complete rule*/
			if(fp.eof() && rule.str()!= "") break;
			else if(fp.eof()) exit(0);
			fp>>s;
			/*create a rule out of it*/
			rule<<s<<" ";	
		}while(!(s == ";")) ;
		//cout<<rule.str()<<endl;
		if( rule.str() != " ")
		{
			/*pre-process the rule */
			cout<<" ORiginal rule = "<<rule.str()<<endl;
			cout<<"left factoring the grammer...\n";
			vector<string> processed_rule = left_factor(rule.str());  
			for(int i(0); i<processed_rule.size(); i++)
			{	
				cout<<"new processed rule :"<<processed_rule[i]<<endl;
				prod_rule r(processed_rule[i]);
				vector<string> new_rules =  r.remove_left_recur();
				r.print_rule();
				g.add_rule(r);
				
				for(int j(0); j<new_rules.size(); j++)
				{	
					prod_rule n(new_rules[j]); 
					n.print_rule();
					g.add_rule(n);
				}
				
			}
			  
		}
	}
	g.print_rules();
	g.first_sets();	
	g.print_firsts();
	g.follow_sets();
	g.print_follows();
	g.generate_parse_table();
	//print_parse_table();
	return 0;
}
