/*
25590349	10252	Common Permutation	Accepted	C++11	0.000	2020-10-08 05:48:21
*/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	string a_array;
	string b_array;
	int a_temp[26]={};
	int b_temp[26]={};
	int t_temp[26]={};
	while(getline(cin,a_array)){
		getline(cin,b_array);		
		for(int i=0;i<a_array.size();i++){
			a_temp[a_array[i]-'a']++ ;
			//cout << a_array[i]-'a' << ".";
		}
		/*
		cout << "-a-" << endl;
		for(int i=0;i<26;i++){
			cout<<a_temp[i];
		}
		*/
		for(int i=0;i<b_array.size();i++){
			b_temp[b_array[i]-'a']++ ;
		}
		/*
		cout << "-b-" << endl;
		for(int i=0;i<26;i++){
			cout<<b_temp[i];
		}
		*/
		for(int i=0;i<26;i++){			
			if(a_temp[i]!=0 && b_temp[i]!=0)
			 	t_temp[i]=min(a_temp[i],b_temp[i]);
		}
		//cout << "-t-" << endl;
		for(int i=0;i<26;i++){
			if(t_temp[i]!='\0'){				
				for(int j=0;j<t_temp[i];j++){
					cout << (char)(i+'a');  
				}				
			}				
		}
		//out << endl;
		for(int i=0;i<26;i++){
			a_temp[i]='\0';
		    b_temp[i]='\0';
		    t_temp[i]='\0';
		}		
		cout << endl;
	}	
}
